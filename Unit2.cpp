//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include <Jpeg.hpp>
#include <pngimage.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2* Form2;
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
void __fastcall TForm2::wallpaperButtonClick(TObject *Sender)
{
    OpenPictureDialog1->Filter = "Images (*.gif;*.png;*.jpg;*.jpeg;*.bmp;*.ico;*.emf;*.wmf;*.tif;*.tiff)|(*.gif;*.png;*.jpg;*.jpeg;*.bmp;*.ico;*.emf;*.wmf;*.tif;*.tiff)";
    OpenPictureDialog1->Execute();
    Image1->Picture->LoadFromFile(OpenPictureDialog1->FileName);
    //TPicture->RegisterFileFormat('png', 'Portable Network Graphic', TPngImage);
}
//---------------------------------------------------------------------------

