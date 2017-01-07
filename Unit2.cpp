//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormCreate(TObject *Sender)
{
        if (Form1->standing) {
                Form2->Caption = "Sit down!";
                Label1->Caption = "Time to sit down";
        } else {
                Form2->Caption = "Stand up!";
                Label1->Caption = "Time to stand up";;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormActivate(TObject *Sender)
{
        Form2->BringToFront();
        if (Form1->sounds) {
                sndPlaySound("assets/sounds/alert-1.wav", SND_ASYNC);
        }

        if (Form1->standing) {
                Form2->Caption = "Sit down!";
                Label1->Caption = "Time to sit down";
        } else {
                Form2->Caption = "Stand up!";
                Label1->Caption = "Time to stand up";
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{
        if (Form1->standing) {
                 Form1->SitDown();
                 Form2->Close();
        } else {
                 Form1->StandUp();
                 Form2->Close();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{
        Form1->Delay();
        Form2->Close();        
}
//---------------------------------------------------------------------------

