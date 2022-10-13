//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

#include <complex.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    //complex a(100,100), b(3,4);
    //this->Caption=a.str();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
    complex a(100,100), b(3,4);
    this->Caption=a.str();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    complex a[4]={complex(5,6), complex(2,2), complex(0,0), complex()};
    for(int i=0; i<4; i++){
        this->Memo1->Lines->Add(a[i].str());
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    this->Canvas->Font->Size=40;
    this->Canvas->TextOutA(20,350,"������ 4o-109�");
}
//---------------------------------------------------------------------------

