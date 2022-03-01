//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit6.h"
#include "Unit7.h"
#include "About.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxClasses"
#pragma link "cxControls"
#pragma link "cxGraphics"
#pragma link "dxBar"
#pragma link "dxRibbon"
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
#pragma link "dxSkinsdxBarPainter"
#pragma link "dxSkinsdxRibbonPainter"
#pragma link "dxSkinSilver"
#pragma link "dxSkinStardust"
#pragma link "dxSkinValentine"
#pragma link "dxSkinXmas2008Blue"
#pragma link "dxRibbonStatusBar"
#pragma link "dxStatusBar"
#pragma link "Unit2"
#pragma link "Unit3"
#pragma link "DBAccess"
#pragma link "MemDS"
#pragma link "MSAccess"
#pragma link "cxStyles"
#pragma link "Unit4"
#pragma link "Unit5"
#pragma link "dxSkinDarkRoom"
#pragma link "dxSkinFoggy"
#pragma link "dxSkinSeven"
#pragma link "dxSkinSharp"
#pragma resource "*.dfm"
TMain *Main;
//---------------------------------------------------------------------------
__fastcall TMain::TMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMain::BlueClick(TObject *Sender)
{
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S11")->AsInteger=0;
Main->MSTable1->Post();
dxRibbon1->ColorSchemeName="Blue";
}
//---------------------------------------------------------------------------

void __fastcall TMain::SilverClick(TObject *Sender)
{
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S11")->AsInteger=1;
Main->MSTable1->Post();
dxRibbon1->ColorSchemeName="Silver";
}
//---------------------------------------------------------------------------
void __fastcall TMain::BlackClick(TObject *Sender)
{
Main->MSTable1->Edit();
Main->MSTable1->FieldByName("S11")->AsInteger=2;
Main->MSTable1->Post();
dxRibbon1->ColorSchemeName="Black";
}
//---------------------------------------------------------------------------
void __fastcall TMain::dxBarButton1Click(TObject *Sender)
{
OpenWebPage("www.autodiagnosis.com");
}
//---------------------------------------------------------------------------
void __fastcall TMain::dxBarButton2Click(TObject *Sender)
{
OpenWebPage("www.autodiagnosis.com/Product.aspx");
}
//---------------------------------------------------------------------------
void __fastcall TMain::dxBarButton3Click(TObject *Sender)
{
OpenWebPage("www.autodiagnosis.com/News.aspx");
}
//---------------------------------------------------------------------------
void __fastcall TMain::FormCreate(TObject *Sender)
{
Main->Tag=0;
Blank1->BringToFront();
Save->Enabled=false;
Print->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TMain::dxBarLargeButton1Click(TObject *Sender)
{
if (Main->Tag==0)
{
Main->Tag=1;
Presentation1->cxRadioGroup1->ItemIndex=-1;
Presentation1->cxCurrencyEdit1->Text="";
Presentation1->cxCheckBox1->Checked=false;
Presentation1->BringToFront();
Presentation1->cxGroupBox4->Width=MSTable1->Fields->Fields[0]->Value;
Presentation1->cxGroupBox8->Width=MSTable1->Fields->Fields[1]->Value;
Presentation1->cxGroupBox10->Height=MSTable1->Fields->Fields[2]->Value;
Presentation1->cxGroupBox12->Height=MSTable1->Fields->Fields[3]->Value;
Presentation1->cxGroupBox14->Height=MSTable1->Fields->Fields[4]->Value;
Presentation1->cxGroupBox6->Width=MSTable1->Fields->Fields[5]->Value;
Presentation1->cxGroupBox18->Height=MSTable1->Fields->Fields[6]->Value;
Anamnese1->cxGroupBox2->Width=MSTable1->Fields->Fields[7]->Value;
Anamnese1->cxGroupBox4->Width=MSTable1->Fields->Fields[8]->Value;
Anamnese1->cxGroupBox6->Height=MSTable1->Fields->Fields[9]->Value;
}
else
{
	if (MessageDlg("Start a new appliation ?", mtWarning, TMsgDlgButtons() << mbYes << mbNo,0) == mrYes)
	{
	Presentation1->cxRadioGroup1->ItemIndex=-1;
	Presentation1->cxCurrencyEdit1->Text="";
	Presentation1->cxCheckBox1->Checked=false;
	Presentation1->BringToFront();
	}
}
Save->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TMain::AboutClick(TObject *Sender)
{
AboutBox->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMain::FormResize(TObject *Sender)
{
dxRibbon1->Align=alTop;
}
//---------------------------------------------------------------------------
void __fastcall TMain::Presentation1cxCurrencyEdit1PropertiesChange(TObject *Sender)
{
if (Presentation1->cxCurrencyEdit1->Value>=13 && Presentation1->cxCurrencyEdit1->Value<50 && Presentation1->cxRadioGroup1->ItemIndex==1)
Presentation1->cxGroupBox3->Visible=true;
else
Presentation1->cxGroupBox3->Visible=false;

if (Presentation1->cxCurrencyEdit1->Value<0 || Presentation1->cxCurrencyEdit1->Value>130)
{
MessageDlg("Please use a valid age",mtWarning,TMsgDlgButtons() << mbOK,0);
Presentation1->cxCurrencyEdit1->Text="";
}
}
//---------------------------------------------------------------------------
void __fastcall TMain::Anamnese1cxRichEdit1PropertiesChange(TObject *Sender)
{
MSQuery1->Close();
MSQuery1->SQL->Clear();
MSQuery1->SQL->Add("select * from Data09");
MSQuery1->SQL->Add("where Symp like '%" + Anamnese1->cxRichEdit1->Text + "%'");
MSQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TMain::FormShow(TObject *Sender)
{
ShortInt a=MSTable1->Fields->Fields[10]->Value;
switch (a)
{
case 0 : dxRibbon1->ColorSchemeName="Blue";break;
case 1 : dxRibbon1->ColorSchemeName="Silver";break;
case 2 : dxRibbon1->ColorSchemeName="Black";break;
}
}
//---------------------------------------------------------------------------
void __fastcall TMain::SaveClick(TObject *Sender)
{
SaveDlg->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMain::DeleteClick(TObject *Sender)
{
DeleteDlg->ShowModal();
}
//---------------------------------------------------------------------------

