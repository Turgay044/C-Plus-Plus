//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxButtons"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxEdit"
#pragma link "cxGraphics"
#pragma link "cxGroupBox"
#pragma link "cxLookAndFeelPainters"
#pragma link "DBAccess"
#pragma link "dxdbtree"
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
#pragma link "dxtree"
#pragma link "MemDS"
#pragma link "MSAccess"
#pragma link "cxMemo"
#pragma link "cxRichEdit"
#pragma link "cxTextEdit"
#pragma resource "*.dfm"
TSaveDlg *SaveDlg;
//---------------------------------------------------------------------------
__fastcall TSaveDlg::TSaveDlg(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSaveDlg::cxButton1Click(TObject *Sender)
{
cxRichEdit1->Clear();
Close();
}
//---------------------------------------------------------------------------
void __fastcall TSaveDlg::cxButton2Click(TObject *Sender)
{
if (cxRichEdit1->Text.c_str()==DataSource1->DataSet->Fields->Fields[2]->Value)
{
 int c;
 c=MessageDlg("OverWrite This File ?", mtWarning, TMsgDlgButtons() << mbYes << mbNo,0);
	switch(c)
		{
		case IDYES :
			 {
				if (Main->Tag==1)
				{
					MSQuery1->Edit();
					MSQuery1->FieldByName("No")->AsInteger=1;
					MSQuery1->Post();
				}
				else if (Main->Tag==2)
				{
					MSQuery1->Edit();
					MSQuery1->FieldByName("No")->AsInteger=2;
					MSQuery1->Post();
				}
				else if (Main->Tag==3)
				{
					MSQuery1->Edit();
					MSQuery1->FieldByName("No")->AsInteger=3;
					MSQuery1->Post();
				}
             }
		 ;break;
		}
}
else
{
	if (Main->Tag==1)
		{
			MSQuery1->Edit();
			MSQuery1->FieldByName("No")->AsInteger=1;
			MSQuery1->Post();
		}
	else if (Main->Tag==2)
		{
			MSQuery1->Edit();
			MSQuery1->FieldByName("No")->AsInteger=2;
			MSQuery1->Post();
		}
	else if (Main->Tag==3)
		{
			MSQuery1->Edit();
			MSQuery1->FieldByName("No")->AsInteger=3;
			MSQuery1->Post();
		}
}
}
//---------------------------------------------------------------------------
void __fastcall TSaveDlg::cxRichEdit1PropertiesChange(TObject *Sender)
{
MSQuery1->Close();
MSQuery1->SQL->Clear();
MSQuery1->SQL->Add("select * from Data13");
MSQuery1->SQL->Add("where Name like '" + cxRichEdit1->Text + "%'");
MSQuery1->Open();
}
//---------------------------------------------------------------------------
