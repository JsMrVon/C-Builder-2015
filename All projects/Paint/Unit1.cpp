//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CSPIN"
#pragma link "CGRID"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Exit1Click(TObject *Sender)
{
    this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::About1Click(TObject *Sender)
{
    Im1->Canvas->TextOutA(70,10,"Vlad Mineeb, 4o-109B");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SaveAs1Click(TObject *Sender)
{
    if(!SD1->Execute())return;
    AnsiString S=SD1->FileName;
    Im1->Picture->SaveToFile(S);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Im1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
    if(!CB1->ItemIndex==1){
    int r=SE1->Value;
    Im1->Canvas->Pen->Color=CG1->BackgroundColor;
    Im1->Canvas->Brush->Color=CG1->ForegroundColor;
    Im1->Canvas->Rectangle(X-r,Y-r,X+r,Y+r);
    }
    if(!CB1->ItemIndex==0){
    int r=SE1->Value;
    Im1->Canvas->Pen->Color=CG1->BackgroundColor;
    Im1->Canvas->Brush->Color=CG1->ForegroundColor;
    Im1->Canvas->Ellipse(X-r,Y-r,X+r,Y+r);
    }
}
//---------------------------------------------------------------------------




void __fastcall TForm1::New1Click(TObject *Sender)
{
    Im1->Picture->Bitmap = NULL;
}
//---------------------------------------------------------------------------




