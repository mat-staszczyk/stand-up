//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

int SecsToMinutes(int secs)
{
        return secs/60;
}

int MinutesToSecs(int mins)
{
        return mins*60;
}

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button1Click(TObject *Sender)
{
        int mins1 = StrToInt(Edit1->Text);
        int mins2 = StrToInt(Edit2->Text);
        Form1->default_sit_time = MinutesToSecs(mins1);
        Form1->default_stand_time = MinutesToSecs(mins2);
        Form3->Close();
}
//---------------------------------------------------------------------------





void __fastcall TForm3::FormCreate(TObject *Sender)
{
        Edit1->Text = SecsToMinutes(Form1->default_sit_time);
        Edit2->Text = SecsToMinutes(Form1->default_stand_time);
}
//---------------------------------------------------------------------------



