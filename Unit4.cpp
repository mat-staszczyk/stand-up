//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label4Click(TObject *Sender)
{
        ShellExecute(NULL,"open","https://www.github.com/sleaz0id", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
 