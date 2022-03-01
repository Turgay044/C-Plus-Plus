//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxEdit"
#pragma link "cxGroupBox"
#pragma link "cxLookAndFeelPainters"
#pragma link "dxSkinBlack"
#pragma link "dxSkinBlue"
#pragma link "dxSkinCaramel"
#pragma link "dxSkinCoffee"
#pragma link "dxSkinDarkSide"
#pragma link "dxSkinGlassOceans"
#pragma link "dxSkiniMaginary"
#pragma link "dxSkinLilian"
#pragma link "dxSkinLiquidSky"
#pragma link "dxSkinLondonLiquidSky"
#pragma link "dxSkinMcSkin"
#pragma link "dxSkinMoneyTwins"
#pragma link "dxSkinOffice2007Black"
#pragma link "dxSkinOffice2007Blue"
#pragma link "dxSkinOffice2007Green"
#pragma link "dxSkinOffice2007Pink"
#pragma link "dxSkinOffice2007Silver"
#pragma link "dxSkinPumpkin"
#pragma link "dxSkinsCore"
#pragma link "dxSkinsDefaultPainters"
#pragma link "dxSkinSilver"
#pragma link "dxSkinStardust"
#pragma link "dxSkinValentine"
#pragma link "dxSkinXmas2008Blue"
#pragma link "cxButtons"
#pragma resource "*.dfm"
TPhysExam *PhysExam;
//---------------------------------------------------------------------------
__fastcall TPhysExam::TPhysExam(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPhysExam::cxButton1Click(TObject *Sender)
{
Main->Tag=0;
Main->Blank1->BringToFront();
Main->Save->Enabled=false;
Main->Print->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TPhysExam::cxButton2Click(TObject *Sender)
{
Main->Print->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TPhysExam::cxButton4Click(TObject *Sender)
{
Main->Anamnese1->BringToFront();
Main->Tag=2;
}
//---------------------------------------------------------------------------
