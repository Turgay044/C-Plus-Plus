//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "cxClasses.hpp"
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxEdit.hpp"
#include "cxGraphics.hpp"
#include "cxGroupBox.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "DBAccess.hpp"
#include "dxNavBar.hpp"
#include "dxNavBarBase.hpp"
#include "dxNavBarCollns.hpp"
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
#include "dxSkinsdxNavBar2Painter.hpp"
#include "dxSkinSilver.hpp"
#include "dxSkinStardust.hpp"
#include "dxSkinValentine.hpp"
#include "dxSkinXmas2008Blue.hpp"
#include "MemDS.hpp"
#include "MSAccess.hpp"
#include <DB.hpp>
#include <ImgList.hpp>
#include "cxButtons.hpp"
#include "dxdbtree.hpp"
#include "dxtree.hpp"
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include "cxMemo.hpp"
#include "cxRichEdit.hpp"
#include "cxTextEdit.hpp"
//---------------------------------------------------------------------------
class TDeleteDlg : public TForm
{
__published:	// IDE-managed Components
	TMSQuery *MSQuery1;
	TIntegerField *MSQuery1ID13;
	TSmallintField *MSQuery1No;
	TStringField *MSQuery1Name;
	TMemoField *MSQuery1SavedSql;
	TDataSource *DataSource1;
	TcxImageList *cxImageList2;
	TcxImageList *cxImageList1;
	TdxNavBar *dxNavBar1;
	TdxNavBarGroup *dxNavBar1Group1;
	TdxNavBarGroup *dxNavBar1Group2;
	TdxNavBarItem *dxNavBar1Item1;
	TdxNavBarItem *dxNavBar1Item2;
	TdxNavBarItem *dxNavBar1Item3;
	TdxNavBarItem *dxNavBar1Item4;
	TcxGroupBox *cxGroupBox1;
	TcxGroupBox *cxGroupBox2;
	TdxDBTreeView *dxDBTreeView1;
	TcxGroupBox *cxGroupBox3;
	TcxButton *cxButton1;
	TcxButton *cxButton2;
	TcxButton *cxButton3;
	TcxGroupBox *cxGroupBox4;
	TcxRichEdit *cxRichEdit1;
	void __fastcall dxNavBar1Item1Click(TObject *Sender);
	void __fastcall dxNavBar1Item2Click(TObject *Sender);
	void __fastcall dxNavBar1Item3Click(TObject *Sender);
	void __fastcall cxButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDeleteDlg(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDeleteDlg *DeleteDlg;
//---------------------------------------------------------------------------
#endif
