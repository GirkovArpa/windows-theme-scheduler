//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class TMyClass : public TThread
{
protected:
	void __fastcall Execute();
public:
	__fastcall TMyClass(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
