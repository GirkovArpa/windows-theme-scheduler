//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ColorGrd.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.WinXPickers.hpp>
#include <Vcl.Samples.Spin.hpp>
#include <Vcl.AppEvnts.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm {
    __published :                       // IDE-managed Components
	TColorDialog *ColorDialog1;
	TButton *Button1;
	TPanel *colorPanel;
	TButton *wallpaperButton;
	TImage *Image1;
	TOpenPictureDialog *OpenPictureDialog1;
	TSpinEdit *hourBox;
	TSpinEdit *minuteBox;
	TLabel *hourLabel;
	TLabel *minuteLabel;
	TButton *scheduleButton;
	TListBox *ListBox1;
	TEdit *nameBox;
	TButton *buttonPreview;
	TLabel *nameLabel;
	TGroupBox *modeGroup;
	TRadioButton *lightRadio;
	TRadioButton *darkRadio;
	TGroupBox *groupPeriod;
	TRadioButton *amRadio;
	TRadioButton *pmRadio;
	TButton *deleteButton;
	TTrayIcon *TrayIcon1;
	TApplicationEvents *ApplicationEvents1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall wallpaperButtonClick(TObject *Sender);
	void __fastcall buttonPreviewClick(TObject *Sender);
	void __fastcall scheduleButtonClick(TObject *Sender);
	void __fastcall ListBox1Click(TObject *Sender);
	void __fastcall deleteButtonClick(TObject *Sender);
	void __fastcall ApplicationEvents1Minimize(TObject *Sender);
	void __fastcall TrayIcon1Click(TObject *Sender);
	void __fastcall TrayIcon1DblClick(TObject *Sender);
                   private :            // User declarations
                              public :  // User declarations
                                        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2* Form2;
//---------------------------------------------------------------------------
void checkSchedule();
#endif
