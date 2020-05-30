//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include <Jpeg.hpp>
#include <pngimage.hpp>

#include "changeWallpaper.h"
#include "changeColor.h"

#include <vector>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2* Form2;

struct Theme {
    COLORREF color;
    String filename;
    bool lightMode;
    int hour;
    int minute;
    bool AM;
    String name;
};

std::vector<Theme> themes;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
    //ColorDialog1->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject* Sender) {
    ColorDialog1->Execute();
    colorPanel->Color = ColorDialog1->Color;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::wallpaperButtonClick(TObject* Sender) {
    OpenPictureDialog1->Filter = "Images (*.gif;*.png;*.jpg;*.jpeg;*.bmp;*.ico;*.emf;*.wmf;*.tif;*.tiff)|(*.gif;*.png;*.jpg;*.jpeg;*.bmp;*.ico;*.emf;*.wmf;*.tif;*.tiff)";
    OpenPictureDialog1->Execute();
    Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::buttonPreviewClick(TObject* Sender) {
    changeWallpaper(OpenPictureDialog1->FileName.c_str(), lightRadio->Checked);
    changeColor(colorPanel->Color);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ListBox1Click(TObject* Sender) {
    for (int i = 0; i < ListBox1->Items->Count; i++) {
        if (ListBox1->Selected[i]) {
            //ShowMessage(ListBox1->Items->Strings[i]);
            Theme theme = themes.at(i);
            colorPanel->Color = (TColor)theme.color;
            Image1->Picture->LoadFromFile(theme.filename);
            OpenPictureDialog1->FileName = theme.filename;
            if (theme.lightMode) {
                lightRadio->Checked = true;
            } else {
                darkRadio->Checked = true;
            }
            hourBox->Value = theme.hour;
            minuteBox->Value = theme.minute;
            if (theme.AM) {
                amRadio->Checked = true;
            } else {
                pmRadio->Checked = true;
            }
            nameBox->Text = theme.name;
        }
    }
}

void __fastcall TForm2::scheduleButtonClick(TObject* Sender) {
    struct Theme theme = {
        (COLORREF)colorPanel->Color,
        OpenPictureDialog1->FileName,
        lightRadio->Checked,
        hourBox->Value,
        minuteBox->Value,
        amRadio->Checked,
        nameBox->Text};

    themes.push_back(theme);
    ListBox1->Items->Add(theme.name);

    //String summary = UIntToStr((unsigned)color) + "\n" + filename + "\n" + IntToStr(lightMode) + "\n" + IntToStr(minute) + "\n" + name + "\n" + IntToStr(AM);
    //ShowMessage(summary);
}
//---------------------------------------------------------------------------
