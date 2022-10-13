//---------------------------------------------------------------------------

#ifndef complexH
#define complexH
#include <vcl.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#pragma hdrstop

struct complex{

    AnsiString str(){
        AnsiString S;
        S.printf("(%.3f,%.3f)",x,y);
        return S;
    }
    
    float x,y;
    complex(){
        x=0; y=0;
    }
    complex(float a, float b){
        x=a, y=b;
    }
    void show(){
        printf("%.5f,%.5fi\n",x,y);
    }
    void printAbs(){
        float len=sqrt(x*x+y*y);
        printf("%.7f\m",len);
    }
    friend complex operator *(complex a, float b){
        complex c;
        c.x=a.x*b;
        c.y=a.y*b;
        return c;
    }
    friend complex operator *(complex a, complex b){
        complex c;
        c.x=a.x*b.x-a.y*b.y;
        c.y=a.y*b.x+a.x*b.y;
        return c;
    }
    friend complex operator +(complex a, complex b){
        complex c;
        c.x=a.x+b.x;
        c.y=a.y+b.y;
        return c;
    }
    complex conj(){return complex(x,-y);}
    float abs2(){return x*x+y*y;}
    float abs(){return sqrt(abs2());}
    friend complex operator /(complex a, complex b){
        return a*b.conj()/b.abs2();
    }
    friend complex operator /(complex a, float b){
        complex c;
        c.x=a.x/b;
        c.y=a.y/b;
        return c;
    }
    friend complex operator -(complex a, complex b){
        complex c;
        c.x=a.x-b.x;
        c.y=a.y-b.y;
        return c;
    }
    complex norm(){return complex(x,y)/abs();}
};
//---------------------------------------------------------------------------
#endif
