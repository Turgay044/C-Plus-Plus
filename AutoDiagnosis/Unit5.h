//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
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
#include "cxButtons.hpp"
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TPhysExam : public TFrame
{
__published:	// IDE-managed Components
	TcxGroupBox *cxGroupBox1;
	TcxButton *cxButton1;
	TcxButton *cxButton2;
	TcxButton *cxButton3;
	TcxButton *cxButton4;
	void __fastcall cxButton1Click(TObject *Sender);
	void __fastcall cxButton2Click(TObject *Sender);
	void __fastcall cxButton4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPhysExam(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPhysExam *PhysExam;
//---------------------------------------------------------------------------
#endif
