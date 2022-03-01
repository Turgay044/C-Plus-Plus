//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "cxButtons.hpp"
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxEdit.hpp"
#include "cxGraphics.hpp"
#include "cxGroupBox.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "DBAccess.hpp"
#include "dxdbtree.hpp"
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
#include "dxSkinSilver.hpp"
#include "dxSkinStardust.hpp"
#include "dxSkinValentine.hpp"
#include "dxSkinXmas2008Blue.hpp"
#include "dxtree.hpp"
#include "MemDS.hpp"
#include "MSAccess.hpp"
#include <ComCtrls.hpp>
#include <DB.hpp>
#include <ImgList.hpp>
#include <Menus.hpp>
#include "cxMemo.hpp"
#include "cxRichEdit.hpp"
#include "cxTextEdit.hpp"
//---------------------------------------------------------------------------
class TSaveDlg : public TForm
{
__published:	// IDE-managed Components
	TcxGroupBox *cxGroupBox1;
	TDataSource *DataSource1;
	TMSQuery *MSQuery1;
	TIntegerField *MSQuery1ID13;
	TSmallintField *MSQuery1No;
	TStringField *MSQuery1Name;
	TMemoField *MSQuery1SavedSql;
	TcxImageList *cxImageList1;
	TdxDBTreeView *dxDBTreeView1;
	TcxGroupBox *cxGroupBox2;
	TcxButton *cxButton1;
	TcxButton *cxButton2;
	TcxGroupBox *cxGroupBox3;
	TcxRichEdit *cxRichEdit1;
	void __fastcall cxButton1Click(TObject *Sender);
	void __fastcall cxButton2Click(TObject *Sender);
	void __fastcall cxRichEdit1PropertiesChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSaveDlg(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSaveDlg *SaveDlg;
//---------------------------------------------------------------------------
#endif
