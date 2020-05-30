//----------------------------------------------------------------------------
#ifndef AboutH
#define AboutH
//----------------------------------------------------------------------------
#include <System.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//----------------------------------------------------------------------------
class TAboutBox : public TForm
{
__published:
	TPanel *Panel1;
	TImage *ProgramIcon;
	TLabel *labelProductName;
	TLabel *labelVersion;
	TLabel *labelCopyright;
	TButton *OKButton;
	TLinkLabel *labelReddit;
	TPanel *Panel2;
	TLinkLabel *labelAttribution;
	void __fastcall OKButtonClick(TObject *Sender);
	void __fastcall labelRedditLinkClick(TObject *Sender, const UnicodeString Link,
          TSysLinkType LinkType);
	void __fastcall labelAttributionLinkClick(TObject *Sender, const UnicodeString Link,
          TSysLinkType LinkType);
private:
public:
	virtual __fastcall TAboutBox(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TAboutBox *AboutBox;
//----------------------------------------------------------------------------
#endif    
