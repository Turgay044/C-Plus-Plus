//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxButtons"
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
#pragma link "cxImage"
#pragma link "cxMemo"
#pragma link "cxRichEdit"
#pragma link "cxTextEdit"
#pragma link "cxClasses"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxFilter"
#pragma link "cxGraphics"
#pragma link "cxGrid"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "cxSplitter"
#pragma link "cxStyles"
#pragma link "dxSkinscxPCPainter"
#pragma link "dxNavBar"
#pragma link "dxNavBarBase"
#pragma link "dxNavBarCollns"
#pragma link "dxSkinsdxNavBar2Painter"
#pragma resource "*.dfm"
TAnamnese *Anamnese;
//---------------------------------------------------------------------------
__fastcall TAnamnese::TAnamnese(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAnamnese::cxButton1Click(TObject *Sender)
{
Main->Tag=0;
Main->Blank1->BringToFront();
Main->Save->Enabled=false;
Main->Print->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TAnamnese::cxButton2Click(TObject *Sender)
{
Main->PhysExam1->BringToFront();
Main->Tag=3;
}
//---------------------------------------------------------------------------
void __fastcall TAnamnese::cxButton4Click(TObject *Sender)
{
Main->Presentation1->BringToFront();
Main->Tag=1;
}
//---------------------------------------------------------------------------
void __fastcall TAnamnese::cxSplitter1Moved(TObject *Sender)
{
int a;
a=cxGroupBox2->Width;
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S8")->AsInteger=a;
Main->MSTable1->Post();
}
//---------------------------------------------------------------------------
void __fastcall TAnamnese::cxSplitter2Moved(TObject *Sender)
{
int a;
a=cxGroupBox4->Width;
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S9")->AsInteger=a;
Main->MSTable1->Post();
}
//---------------------------------------------------------------------------
void __fastcall TAnamnese::cxSplitter3Moved(TObject *Sender)
{
int a;
a=cxGroupBox6->Height;
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S10")->AsInteger=a;
Main->MSTable1->Post();
}
//---------------------------------------------------------------------------

