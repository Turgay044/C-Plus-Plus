//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxClasses"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxEdit"
#pragma link "cxGraphics"
#pragma link "cxGroupBox"
#pragma link "cxLookAndFeelPainters"
#pragma link "DBAccess"
#pragma link "dxNavBar"
#pragma link "dxNavBarBase"
#pragma link "dxNavBarCollns"
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
#pragma link "dxSkinsdxNavBar2Painter"
#pragma link "dxSkinSilver"
#pragma link "dxSkinStardust"
#pragma link "dxSkinValentine"
#pragma link "dxSkinXmas2008Blue"
#pragma link "MemDS"
#pragma link "MSAccess"
#pragma link "cxButtons"
#pragma link "dxdbtree"
#pragma link "dxtree"
#pragma link "cxMemo"
#pragma link "cxRichEdit"
#pragma link "cxTextEdit"
#pragma resource "*.dfm"
TDeleteDlg *DeleteDlg;
//---------------------------------------------------------------------------
__fastcall TDeleteDlg::TDeleteDlg(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDeleteDlg::dxNavBar1Item1Click(TObject *Sender)
{
MSQuery1->Close();
MSQuery1->SQL->Clear();
MSQuery1->SQL->Add("select * from Data13");
MSQuery1->SQL->Add("where No=0");
MSQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TDeleteDlg::dxNavBar1Item2Click(TObject *Sender)
{
MSQuery1->Close();
MSQuery1->SQL->Clear();
MSQuery1->SQL->Add("select * from Data13");
MSQuery1->SQL->Add("where No=1");
MSQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TDeleteDlg::dxNavBar1Item3Click(TObject *Sender)
{
MSQuery1->Close();
MSQuery1->SQL->Clear();
MSQuery1->SQL->Add("select * from Data13");
MSQuery1->SQL->Add("where No=2");
MSQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TDeleteDlg::cxButton1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
