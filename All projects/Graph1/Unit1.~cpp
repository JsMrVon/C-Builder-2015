//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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

void __fastcall TForm1::Button1Click(TObject *Sender)
{
this->Canvas->LineTo(100,50);
this->Canvas->LineTo(110, 10);
this->Canvas->MoveTo(10,10);
this->Canvas->LineTo(600,10);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
this->Canvas->Rectangle(30,30,50,100);
this->Canvas->Pen->Color=clRed;
this->Canvas->Rectangle(60,30,70,100);
this->Canvas->Pen->Color=clGreen;
this->Canvas->Ellipse(100,100,300,200);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
this->Canvas->Brush->Color=clNavy;
this->Canvas->Rectangle(300,300,150,50);
this->Canvas->Brush->Color=clMaroon;
this->Canvas->Ellipse(300,300,150,50);
this->Canvas->Pen->Color=clRed;
this->Canvas->MoveTo(300,150);
this->Canvas->Pen->Color=clLime;
this->Canvas->LineTo(150,300);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
this->Canvas->Font->Size=40;
this->Canvas->TextOutA(20,200,"Влад Минеев, 4o-109Б");        
}
//---------------------------------------------------------------------------
