//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include "trayicon.h"
#include <Buttons.hpp>
#include <MPlayer.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------
AnsiString IntToTimeString(int num);
AnsiString SecondsToReadableTime(int secs, bool full_time);
int SecsToHours(int secs);
int SecsToMinutes(int secs);

class TForm1 : public TForm
{
friend class TForm2;
__published:	// IDE-managed Components
        TLabel *Label1;
        TTimer *Timer1;
        TTrayIcon *TrayIcon1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TTimer *Timer2;
        TImageList *ImageList1;
        TSpeedButton *SpeedButton1;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton3;
        TSpeedButton *SpeedButton4;
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall TrayIcon1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall SpeedButton2Click(TObject *Sender);
        void __fastcall SpeedButton3Click(TObject *Sender);
        void __fastcall SpeedButton4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        void SitDown();
        void StandUp();
        void Delay();
        int default_sit_time;
        int default_stand_time;
        int s_timer;
        int d_timer;
        int s_total;
        int s_total_sit;
        int s_total_stand;
        int s_delay;
        bool standing;
        bool sounds;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
