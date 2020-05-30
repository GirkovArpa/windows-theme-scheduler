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
//---------------------------------------------------------------------------
class TForm2 : public TForm {
    __published :                       // IDE-managed Components
	TColorDialog *ColorDialog1;
	TButton *Button1;
	TPanel *colorPanel;
	TRadioGroup *RadioGroup1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TButton *wallpaperButton;
	TImage *Image1;
	TOpenPictureDialog *OpenPictureDialog1;
	TSpinEdit *SpinEdit1;
	TSpinEdit *SpinEdit2;
	TRadioGroup *RadioGroup2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TLabel *hourLabel;
	TLabel *minuteLabel;
	TButton *scheduleButton;
	TListBox *ListBox1;
	TEdit *nameTextbox;
	TButton *buttonPreview;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall wallpaperButtonClick(TObject *Sender);
	void __fastcall buttonPreviewClick(TObject *Sender);
                   private :            // User declarations
                              public :  // User declarations
                                        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2* Form2;
//---------------------------------------------------------------------------
#endif
