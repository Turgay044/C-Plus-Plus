//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBlank *Blank;
//---------------------------------------------------------------------------
__fastcall TBlank::TBlank(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------