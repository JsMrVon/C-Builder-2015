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

//������ ������ � ������ ����, 4�-109�
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    //��������� �������� �����
    this->Canvas->Pen->Color=clRed;
    this->Canvas->Brush->Color=clRed;
    this->Canvas->Ellipse(10, 10, 100, 100);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
    //������� � �������� ������
    this->Canvas->Pen->Color=ColorBox1->Selected;
    this->Canvas->Brush->Color=ColorBox1->Selected;
    this->Canvas->Rectangle(100, 100, 200, 200);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ColorBox2Change(TObject *Sender)
{
    //���� ����� �� �����
    this->Color=ColorBox2->Selected;  
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormMouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    //���� �����������
    int r=CSpinEdit1->Value;
    this->Canvas->Ellipse(X-r, Y-r, X+r, Y+r);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AboutClick(TObject *Sender)
{
    ShowMessage("������ ������ � ������ ����\n4�-109�");    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ExitClick(TObject *Sender)
{
    Close();    
}
//---------------------------------------------------------------------------
