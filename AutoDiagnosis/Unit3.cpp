//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit3.h"
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
#pragma link "cxCheckBox"
#pragma link "cxCurrencyEdit"
#pragma link "cxRadioGroup"
#pragma link "cxTextEdit"
#pragma link "cxSplitter"
#pragma link "cxImage"
#pragma link "cxMemo"
#pragma link "cxRichEdit"
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
#pragma link "cxStyles"
#pragma link "dxSkinscxPCPainter"
#pragma resource "*.dfm"
TPresentation *Presentation;
//---------------------------------------------------------------------------
__fastcall TPresentation::TPresentation(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPresentation::cxButton1Click(TObject *Sender)
{
Main->Tag=0;
Main->Blank1->BringToFront();
Main->Save->Enabled=false;
Main->Print->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TPresentation::cxButton2Click(TObject *Sender)
{
if (cxCurrencyEdit1->Text.IsEmpty() && cxRadioGroup1->ItemIndex==-1)
{
MessageDlg("Please Enter the Sex and Age",mtError,TMsgDlgButtons() << mbOK,0);
}
else if (cxCurrencyEdit1->Text.IsEmpty())
{
MessageDlg("Please Enter the Age",mtError,TMsgDlgButtons() << mbOK,0);
}
else if (cxRadioGroup1->ItemIndex==-1)
{
MessageDlg("Please Enter the Sex",mtError,TMsgDlgButtons() << mbOK,0);
}
else
{
Main->Anamnese1->BringToFront();
Main->Tag=2;
}
}
//---------------------------------------------------------------------------
void __fastcall TPresentation::cxSplitter1Moved(TObject *Sender)
{
int a;
a=cxGroupBox4->Width;
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S1")->AsInteger=a;
Main->MSTable1->Post();
}
//---------------------------------------------------------------------------
void __fastcall TPresentation::cxSplitter2Moved(TObject *Sender)
{
int a;
a=cxGroupBox8->Width;
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S2")->AsInteger=a;
Main->MSTable1->Post();
}
//---------------------------------------------------------------------------
void __fastcall TPresentation::cxSplitter3Moved(TObject *Sender)
{
int a;
a=cxGroupBox10->Height;
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S3")->AsInteger=a;
Main->MSTable1->Post();
}
//---------------------------------------------------------------------------
void __fastcall TPresentation::cxSplitter4Moved(TObject *Sender)
{
int a;
a=cxGroupBox12->Height;
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S4")->AsInteger=a;
Main->MSTable1->Post();
}
//---------------------------------------------------------------------------
void __fastcall TPresentation::cxSplitter5Moved(TObject *Sender)
{
int a;
a=cxGroupBox14->Height;
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S5")->AsInteger=a;
Main->MSTable1->Post();
}
//---------------------------------------------------------------------------
void __fastcall TPresentation::cxSplitter6Moved(TObject *Sender)
{
int a;
a=cxGroupBox6->Width;
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S6")->AsInteger=a;
Main->MSTable1->Post();
}
//---------------------------------------------------------------------------
void __fastcall TPresentation::cxSplitter7Moved(TObject *Sender)
{
int a;
a=cxGroupBox18->Height;
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S7")->AsInteger=a;
Main->MSTable1->Post();
}
//---------------------------------------------------------------------------

