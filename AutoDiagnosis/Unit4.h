//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "cxButtons.hpp"
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxEdit.hpp"
#include "cxGroupBox.hpp"
#include "cxLookAndFeelPainters.hpp"
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
#include <Menus.hpp>
#include "cxImage.hpp"
#include "cxMemo.hpp"
#include "cxRichEdit.hpp"
#include "cxTextEdit.hpp"
#include <Graphics.hpp>
#include "cxClasses.hpp"
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxFilter.hpp"
#include "cxGraphics.hpp"
#include "cxGrid.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "cxSplitter.hpp"
#include "cxStyles.hpp"
#include "dxSkinscxPCPainter.hpp"
#include <DB.hpp>
#include "dxNavBar.hpp"
#include "dxNavBarBase.hpp"
#include "dxNavBarCollns.hpp"
#include "dxSkinsdxNavBar2Painter.hpp"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TAnamnese : public TFrame
{
__published:	// IDE-managed Components
	TcxGroupBox *cxGroupBox1;
	TcxButton *cxButton1;
	TcxButton *cxButton2;
	TcxButton *cxButton3;
	TcxButton *cxButton4;
	TcxGroupBox *cxGroupBox2;
	TcxGroupBox *cxGroupBox3;
	TcxImage *cxImage1;
	TcxRichEdit *cxRichEdit1;
	TcxGrid *cxGrid1;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridDBColumn *cxGrid1DBTableView1Symp;
	TcxGridDBTableView *cxGrid1DBTableView2;
	TcxGridLevel *cxGrid1Level1;
	TcxSplitter *cxSplitter1;
	TcxGroupBox *cxGroupBox4;
	TcxSplitter *cxSplitter2;
	TcxGroupBox *cxGroupBox5;
	TcxGrid *cxGrid2;
	TcxGridDBTableView *cxGrid2DBTableView1;
	TcxGridLevel *cxGrid2Level1;
	TcxGroupBox *cxGroupBox6;
	TcxSplitter *cxSplitter3;
	TcxGroupBox *cxGroupBox7;
	TcxGrid *cxGrid4;
	TcxGridDBTableView *cxGrid4DBTableView1;
	TcxGridLevel *cxGrid4Level1;
	TdxNavBar *dxNavBar1;
	TdxNavBarGroup *dxNavBar1Group1;
	TdxNavBarGroup *dxNavBar1Group2;
	TdxNavBarGroup *dxNavBar1Group3;
	TdxNavBarGroup *dxNavBar1Group4;
	TdxNavBarGroup *dxNavBar1Group5;
	TdxNavBarGroupControl *dxNavBar1Group1Control;
	TcxGrid *cxGrid3;
	TcxGridDBTableView *cxGrid3DBTableView1;
	TcxGridDBColumn *cxGrid3DBTableView1Disea;
	TcxGridLevel *cxGrid3Level1;
	TdxNavBarGroupControl *dxNavBar1Group2Control;
	TcxGrid *cxGrid5;
	TcxGridDBTableView *cxGrid5DBTableView1;
	TcxGridDBColumn *cxGrid5DBTableView1Disea;
	TcxGridLevel *cxGrid5Level1;
	TdxNavBarGroupControl *dxNavBar1Group3Control;
	TcxGrid *cxGrid6;
	TcxGridDBTableView *cxGrid6DBTableView1;
	TcxGridDBColumn *cxGrid6DBTableView1Disea;
	TcxGridLevel *cxGrid6Level1;
	TdxNavBarGroupControl *dxNavBar1Group4Control;
	TcxGrid *cxGrid7;
	TcxGridDBTableView *cxGrid7DBTableView1;
	TcxGridDBColumn *cxGrid7DBTableView1Disea;
	TcxGridLevel *cxGrid7Level1;
	TdxNavBarGroupControl *dxNavBar1Group5Control;
	TcxGrid *cxGrid8;
	TcxGridDBTableView *cxGrid8DBTableView1;
	TcxGridDBColumn *cxGrid8DBTableView1Disea;
	TcxGridLevel *cxGrid8Level1;
	void __fastcall cxButton1Click(TObject *Sender);
	void __fastcall cxButton2Click(TObject *Sender);
	void __fastcall cxButton4Click(TObject *Sender);
	void __fastcall cxSplitter1Moved(TObject *Sender);
	void __fastcall cxSplitter2Moved(TObject *Sender);
	void __fastcall cxSplitter3Moved(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAnamnese(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAnamnese *Anamnese;
//---------------------------------------------------------------------------
#endif
