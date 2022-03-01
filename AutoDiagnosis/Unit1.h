//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "cxClasses.hpp"
#include "cxControls.hpp"
#include "cxGraphics.hpp"
#include "dxBar.hpp"
#include "dxRibbon.hpp"
#include "dxSkinBlack.hpp"
#include "dxSkinBlue.hpp"
#include "dxSkinCaramel.hpp"
#include "dxSkinCoffee.hpp"
#include "dxSkinDarkSide.hpp"
#include "dxSkinGlassOceans.hpp"
#include "dxSkiniMaginary.hpp"
#include "dxSkinLilian.hpp"
#include "dxSkinLiquidSky.hpp"
#include "dxSkinLondonLiquidSky.hpp"
#include "dxSkinMcSkin.hpp"
#include "dxSkinMoneyTwins.hpp"
#include "dxSkinOffice2007Black.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinOffice2007Green.hpp"
#include "dxSkinOffice2007Pink.hpp"
#include "dxSkinOffice2007Silver.hpp"
#include "dxSkinPumpkin.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "dxSkinsdxBarPainter.hpp"
#include "dxSkinsdxRibbonPainter.hpp"
#include "dxSkinSilver.hpp"
#include "dxSkinStardust.hpp"
#include "dxSkinValentine.hpp"
#include "dxSkinXmas2008Blue.hpp"
#include <ImgList.hpp>
#include "dxRibbonStatusBar.hpp"
#include "dxStatusBar.hpp"
#include "Unit2.h"
#include "Unit3.h"
#include "DBAccess.hpp"
#include "MemDS.hpp"
#include "MSAccess.hpp"
#include <DB.hpp>
#include "cxStyles.hpp"
#include "Unit4.h"
#include "Unit5.h"
#include "dxSkinDarkRoom.hpp"
#include "dxSkinFoggy.hpp"
#include "dxSkinSeven.hpp"
#include "dxSkinSharp.hpp"
//---------------------------------------------------------------------------
class TMain : public TForm
{
__published:	// IDE-managed Components
	TdxRibbonTab *dxRibbon1Tab1;
	TdxRibbon *dxRibbon1;
	TdxBarManager *dxBarManager1;
	TcxImageList *cxLargeImages;
	TcxImageList *cxSmallImages;
	TdxBar *dxBarManager1Bar1;
	TdxBarLargeButton *dxBarLargeButton1;
	TdxBarLargeButton *Open;
	TdxBarLargeButton *Save;
	TdxBarLargeButton *Delete;
	TdxBarLargeButton *Print;
	TdxBar *dxBarManager1Bar2;
	TdxRibbonTab *dxRibbon1Tab2;
	TdxBarLargeButton *Blue;
	TdxBarLargeButton *Silver;
	TdxBarLargeButton *Black;
	TdxRibbonTab *dxRibbon1Tab3;
	TdxBar *dxBarManager1Bar3;
	TdxBarLargeButton *Help;
	TdxBarLargeButton *Mail;
	TdxBarLargeButton *About;
	TdxBar *dxBarManager1Bar4;
	TdxBarButton *dxBarButton1;
	TdxBarScreenTipRepository *dxBarScreenTipRepository1;
	TdxBarScreenTip *stNew;
	TdxBarScreenTip *stOpen;
	TdxBarScreenTip *stSave;
	TdxBarScreenTip *stPrint;
	TdxBarScreenTip *stBlue;
	TdxBarScreenTip *stBlack;
	TdxBarScreenTip *stSilver;
	TdxBarScreenTip *stHelpTxt;
	TdxBarScreenTip *stMail;
	TdxBarScreenTip *stAbout;
	TdxBarScreenTip *stWebPage;
	TdxBarScreenTip *stProductWeb;
	TdxBarScreenTip *stNewsWebPage;
	TdxBarButton *dxBarButton2;
	TdxBarButton *dxBarButton3;
	TdxBarScreenTip *stDelete;
	TdxBarApplicationMenu *ApplicationMenu;
	TdxRibbonStatusBar *dxRibbonStatusBar1;
	TBlank *Blank1;
	TPresentation *Presentation1;
	TMSConnection *MSConnection1;
	TMSTable *MSTable1;
	TSmallintField *MSTable1S1;
	TSmallintField *MSTable1S2;
	TSmallintField *MSTable1S3;
	TSmallintField *MSTable1S4;
	TSmallintField *MSTable1S5;
	TSmallintField *MSTable1S6;
	TSmallintField *MSTable1S7;
	TSmallintField *MSTable1S8;
	TSmallintField *MSTable1S9;
	TSmallintField *MSTable1S10;
	TSmallintField *MSTable1S11;
	TMSQuery *MSQuery1;
	TMSQuery *MSQuery2;
	TMSQuery *MSQuery3;
	TMSQuery *MSQuery4;
	TMSQuery *MSQuery5;
	TMSQuery *MSQuery6;
	TDataSource *DataSource1;
	TDataSource *DataSource2;
	TDataSource *DataSource3;
	TDataSource *DataSource4;
	TDataSource *DataSource5;
	TDataSource *DataSource6;
	TcxStyleRepository *cxStyleRepository1;
	TcxStyle *cxStyle1;
	TcxStyle *cxStyle2;
	TAnamnese *Anamnese1;
	TPhysExam *PhysExam1;
	void __fastcall BlueClick(TObject *Sender);
	void __fastcall SilverClick(TObject *Sender);
	void __fastcall BlackClick(TObject *Sender);
	void __fastcall dxBarButton1Click(TObject *Sender);
	void __fastcall dxBarButton2Click(TObject *Sender);
	void __fastcall dxBarButton3Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall dxBarLargeButton1Click(TObject *Sender);
	void __fastcall AboutClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall Presentation1cxCurrencyEdit1PropertiesChange(TObject *Sender);
	void __fastcall Anamnese1cxRichEdit1PropertiesChange(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall SaveClick(TObject *Sender);
	void __fastcall DeleteClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMain *Main;
//---------------------------------------------------------------------------
#endif
