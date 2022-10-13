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
}
//---------------------------------------------------------------------------


void __fastcall TForm1::B1Click(TObject *Sender)
{
    complex a(3,4);
    Memo1->Lines->Add(a.abs());
    Memo1->Lines->Add(a.str());
    a=polar(3*M_PI/2, 5);
    Memo1->Lines->Add(a.str());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::B2Click(TObject *Sender)
{
    complex a=polar(M_PI/2)*10;
    Memo1->Lines->Add(a.str());
    a=a*polar(-M_PI/4);
    Memo1->Lines->Add(a.str());
    a=a*polar(-M_PI/4);
    Memo1->Lines->Add(a.str());
    a=a*polar(-M_PI/4);
    Memo1->Lines->Add(a.str());
    a=a*polar(-M_PI/4);
    Memo1->Lines->Add(a.str());
    a=a*polar(-M_PI/4);
    Memo1->Lines->Add(a.str());
    a=a*polar(-M_PI/4);
    Memo1->Lines->Add(a.str());
    a=a*polar(-M_PI/4);
    Memo1->Lines->Add(a.str());
    a=a*polar(-M_PI/4);
    Memo1->Lines->Add(a.str());
}
//---------------------------------------------------------------------------
