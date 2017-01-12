//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "mmsystem.h"

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------

AnsiString IntToTimeString(int num)
{
        AnsiString result;
        result = IntToStr(num);

        if (num < 10)
        {
                result = "0"+result;
        }

        return result;
}

int SecsToHours(int secs)
{
        return secs/3600;
}

int SecsToMinutes(int secs)
{
        return secs/60;
}


AnsiString SecondsToReadableTime(int secs, bool full_time = true)
{
        int hours, minutes, seconds;
        AnsiString hh, mm, ss;

        hours = SecsToHours(secs);
        minutes = SecsToMinutes(secs - hours * 3600);
        seconds = secs - hours * 3600 - minutes * 60;

        hh = IntToTimeString(hours);
        mm = IntToTimeString(minutes);
        ss = IntToTimeString(seconds);

        if (full_time) {
                return hh+":"+mm+":"+ss;
        } else {
                return hh+":"+mm;
        }
}

void TForm1::SitDown()
{
        this->standing = false;
        this->s_timer = this->default_sit_time;
        this->Timer1->Enabled = true;
        this->Label2->Font->Color = clRed;
        this->Label2->Caption = "Sit";
        this->TrayIcon1->Hint = "Sit";
        this->SpeedButton2->Caption = "Stand up";
}

void TForm1::StandUp()
{
        this->standing = true;
        this->s_timer = this->default_stand_time;
        this->Timer1->Enabled = true;
        this->Label2->Font->Color = clGreen;
        this->Label2->Caption = "Stand";
        this->TrayIcon1->Hint = "Stand";
        this->SpeedButton2->Caption = "Sit down";
}

void TForm1::Delay()
{
        d_timer = s_delay;
        this->Timer1->Enabled = false;
        this->Timer2->Enabled = true;
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        Label1->Caption = SecondsToReadableTime(this->s_timer);
        Label7->Caption = SecondsToReadableTime(this->s_total, false);
        Label8->Caption = SecondsToReadableTime(this->s_total_stand, false);
        Label9->Caption = SecondsToReadableTime(this->s_total_sit, false);

        if (this->s_timer<=0)
        {
                Timer1->Enabled = false;
                Form2->ShowModal();
        }

        (this->s_timer)--;
        (this->s_total)++;
        if (standing) {
                (this->s_total_stand)++;
        } else {
                (this->s_total_sit)++;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrayIcon1Click(TObject *Sender)
{
         Show();
         Application->BringToFront();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
       if(Application->MessageBoxA(
       "Do you really want to quit?","Confirm",
       MB_YESNO | MB_ICONQUESTION) == IDNO )
       {
                Action=caNone;
       }
}
//---------------------------------------------------------------------------







void __fastcall TForm1::FormCreate(TObject *Sender)
{
        s_timer = 3600;
        Label1->Caption = SecondsToReadableTime(s_timer);
        default_sit_time = 3600;
        default_stand_time = 3600;
        s_total = 0;
        s_delay = 180;
        Label7->Caption = SecondsToReadableTime(s_total, false);
        s_total_sit = 0;
        Label8->Caption = SecondsToReadableTime(s_total_sit, false);
        s_total_stand = 0;
        Label9->Caption = SecondsToReadableTime(s_total_stand, false);
        standing = true;
        sounds = true;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
          if (d_timer == 0)
          {
                    this->Timer2->Enabled = false;
                    Form2->ShowModal();
          }

          d_timer--;
}
//---------------------------------------------------------------------------





void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
        if (s_timer > 0)
        {
                if (Timer1->Enabled) {
                        SpeedButton3->Glyph->LoadFromFile("assets/icons/play.bmp");
                } else {
                        SpeedButton3->Glyph->LoadFromFile("assets/icons/pause.bmp");
                }
                Timer1->Enabled = !Timer1->Enabled;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
        Form3->ShowModal();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
        if (standing) {
                SitDown();
        } else {
                StandUp();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
        if (s_timer > 0)
        {
                if (Timer1->Enabled) {
                        SpeedButton3->Glyph->LoadFromFile("assets/icons/play.bmp");
                } else {
                        SpeedButton3->Glyph->LoadFromFile("assets/icons/pause.bmp");
                }
                Timer1->Enabled = !Timer1->Enabled;
        }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
        Form4->ShowModal();
}
//---------------------------------------------------------------------------

