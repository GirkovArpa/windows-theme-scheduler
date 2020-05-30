//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "About.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
TAboutBox *AboutBox;
//---------------------------------------------------------------------
__fastcall TAboutBox::TAboutBox(TComponent *AOwner) : TForm(AOwner) {
}
//---------------------------------------------------------------------

void __fastcall TAboutBox::OKButtonClick(TObject *Sender) {
    this->Close();
}
void __fastcall TAboutBox::labelRedditLinkClick(TObject *Sender, const UnicodeString Link, TSysLinkType LinkType) {
    ShellExecuteA(0, "open", "https://old.reddit.com/r/software/comments/gsqhtr/looking_for_a_program_that_changes_system_theme/", "", "", SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TAboutBox::labelAttributionLinkClick(TObject *Sender, const UnicodeString Link, TSysLinkType LinkType) {
    ShellExecuteA(0, "open", "https://www.aha-soft.com/", "", "", SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
