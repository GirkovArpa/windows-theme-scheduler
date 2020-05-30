//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#pragma package(smart_init)

#include <ctime>

time_t currentTime;
struct tm *localTime;

int Hour;
int Min;
int Sec;
bool AM;
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall TMyClass::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

void updateTime() {
    AM = false;
    time(&currentTime);                   // Get the current time
    localTime = localtime(&currentTime);  // Convert the current time to the local time
    Hour = localTime->tm_hour;
    Min = localTime->tm_min;
    Sec = localTime->tm_sec;

    AM = (Hour < 12);

    if (Hour > 12) {
        Hour -= 12;
    }
}

__fastcall TMyClass::TMyClass(bool CreateSuspended) : TThread(CreateSuspended) {
    updateTime();
    //ShowMessage("Hour: " + IntToStr(Hour) + "\nMinute: " + IntToStr(Min) + "\nAM? " + IntToStr(AM));
}
//---------------------------------------------------------------------------
void __fastcall TMyClass::Execute() {
    NameThreadForDebugging(System::String(L"My Thread"));
    //---- Place thread code here ----
    while (true) {
        updateTime();
        Synchronize([&]() {
            checkSchedule(Hour, Min, AM);
        });
        Sleep(60'000);
    }
}
//---------------------------------------------------------------------------
