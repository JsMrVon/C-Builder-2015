//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
this->Caption=this->Edit1->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CSpinEdit1Click(TObject *Sender)
{
this->CSpinEdit3->Value=this->CSpinEdit1->Value+this->CSpinEdit2->Value;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
this->CSpinEdit3->Value=this->CSpinEdit1->Value+this->CSpinEdit2->Value;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
ShowMessage("Краснов Владислав\nМинеев Владислав\n40-109Б");        
}
//---------------------------------------------------------------------------

