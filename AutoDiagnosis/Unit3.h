//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
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
#include "cxCheckBox.hpp"
#include "cxCurrencyEdit.hpp"
#include "cxRadioGroup.hpp"
#include "cxTextEdit.hpp"
#include "cxSplitter.hpp"
#include "cxImage.hpp"
#include "cxMemo.hpp"
#include "cxRichEdit.hpp"
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
#include "cxStyles.hpp"
#include "dxSkinscxPCPainter.hpp"
#include <DB.hpp>
//---------------------------------------------------------------------------
class TPresentation : public TFrame
{
__published:	// IDE-managed Components
	TcxButton *cxButton1;
	TcxButton *cxButton2;
	TcxGroupBox *GroupBox1;
	TcxGroupBox *cxGroupBox1;
	TcxRadioGroup *cxRadioGroup1;
	TcxGroupBox *cxGroupBox2;
	TcxCurrencyEdit *cxCurrencyEdit1;
	TcxGroupBox *cxGroupBox3;
	TcxCheckBox *cxCheckBox1;
	TcxGroupBox *cxGroupBox4;
	TcxGroupBox *cxGroupBox5;
	TcxSplitter *cxSplitter1;
	TcxGroupBox *cxGroupBox6;
	TcxRichEdit *cxRichEdit1;
	TcxImage *cxImage1;
	TcxGroupBox *cxGroupBox7;
	TcxImage *cxImage2;
	TcxRichEdit *cxRichEdit2;
	TcxGroupBox *cxGroupBox8;
	TcxGroupBox *cxGroupBox9;
	TcxImage *cxImage3;
	TcxRichEdit *cxRichEdit3;
	TcxSplitter *cxSplitter2;
	TcxGroupBox *cxGroupBox10;
	TcxSplitter *cxSplitter3;
	TcxGroupBox *cxGroupBox11;
	TcxGrid *cxGrid1;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TcxGrid *cxGrid2;
	TcxGridDBTableView *cxGrid2DBTableView1;
	TcxGridLevel *cxGrid2Level1;
	TcxGroupBox *cxGroupBox12;
	TcxSplitter *cxSplitter4;
	TcxGroupBox *cxGroupBox13;
	TcxGrid *cxGrid3;
	TcxGridDBTableView *cxGrid3DBTableView1;
	TcxGridLevel *cxGrid3Level1;
	TcxGrid *cxGrid4;
	TcxGridDBTableView *cxGrid4DBTableView1;
	TcxGridLevel *cxGrid4Level1;
	TcxGroupBox *cxGroupBox14;
	TcxSplitter *cxSplitter5;
	TcxGroupBox *cxGroupBox15;
	TcxGrid *cxGrid5;
	TcxGridDBTableView *cxGrid5DBTableView1;
	TcxGridLevel *cxGrid5Level1;
	TcxGrid *cxGrid6;
	TcxGridDBTableView *cxGrid6DBTableView1;
	TcxGridLevel *cxGrid6Level1;
	TcxSplitter *cxSplitter6;
	TcxGroupBox *cxGroupBox16;
	TcxGroupBox *cxGroupBox17;
	TcxImage *cxImage4;
	TcxRichEdit *cxRichEdit4;
	TcxGroupBox *cxGroupBox18;
	TcxSplitter *cxSplitter7;
	TcxGroupBox *cxGroupBox19;
	TcxGrid *cxGrid7;
	TcxGridDBTableView *cxGrid7DBTableView1;
	TcxGridLevel *cxGrid7Level1;
	TcxGrid *cxGrid8;
	TcxGridDBTableView *cxGrid8DBTableView1;
	TcxGridLevel *cxGrid8Level1;
	void __fastcall cxButton1Click(TObject *Sender);
	void __fastcall cxButton2Click(TObject *Sender);
	void __fastcall cxSplitter1Moved(TObject *Sender);
	void __fastcall cxSplitter2Moved(TObject *Sender);
	void __fastcall cxSplitter3Moved(TObject *Sender);
	void __fastcall cxSplitter4Moved(TObject *Sender);
	void __fastcall cxSplitter5Moved(TObject *Sender);
	void __fastcall cxSplitter6Moved(TObject *Sender);
	void __fastcall cxSplitter7Moved(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPresentation(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPresentation *Presentation;
//---------------------------------------------------------------------------
#endif
