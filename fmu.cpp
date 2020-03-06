//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "fmu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.LgXhdpiTb.fmx", _PLAT_ANDROID)
#pragma resource ("*.iPad.fmx", _PLAT_IOS)
#pragma resource ("*.iPhone4in.fmx", _PLAT_IOS)

Tfm *fm;
//---------------------------------------------------------------------------
__fastcall Tfm::Tfm(TComponent* Owner)
	: TForm(Owner)
{
	tc->TabPosition = TTabPosition::None;
	tc->ActiveTab=tc_menu;
}
//---------------------------------------------------------------------------
void __fastcall Tfm::bu_easyClick(TObject *Sender)
{
	tc->ActiveTab=tc_easy;
}
//---------------------------------------------------------------------------

void __fastcall Tfm::bu_averegeClick(TObject *Sender)
{
		tc->ActiveTab=tc_averege;
}
//---------------------------------------------------------------------------

void __fastcall Tfm::bu_hardClick(TObject *Sender)
{
		tc->ActiveTab=tc_hard;
}
//---------------------------------------------------------------------------


void __fastcall Tfm::back_to_menu(TObject *Sender)
{
		tc->ActiveTab=tc_menu;

}
//---------------------------------------------------------------------------

void __fastcall Tfm::Button2Click(TObject *Sender)
{
   //	A1-> TextSettings->FontColor=claRed;
   //	A2-> TextSettings->FontColor=claRed;
       setRedColor(A1);
}


void __fastcall Tfm::setRedColor(Edit myText){
	Pointer k  =   myText;
	A1->TextSettings->FontColor=claRed;
}

//---------------------------------------------------------------------------

