//---------------------------------------------------------------------------

#ifndef complexH
#define complexH
#include <stdio.h>
#include <math.h>
struct complex{
    float x, y;
    void show(){
        printf("%.1f+%.1f*i\n",x,y);
    }
    complex(){
        x=0; y=0;
    }
    complex(float x1, float y1){
        x=x1;
        y=y1;
    }
    void printAbs(){
        float abs;
        abs=sqrt(x*x+y*y);
        printf("%.1f\n", abs);
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
        c.y=b.x*a.y+a.x*b.y;
        return c;
    }
    friend complex operator +(complex a, complex b){
        complex c;
        c.x=a.x+b.x;
        c.y=a.y+b.y;
        return c;
    }
    friend complex operator -(complex a, complex b){
        complex c;
        c.x=a.x-b.x;
        c.y=a.y-b.y;
        return c;
    }
    complex conj(){return complex(x, -y);}
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
    complex norm(){return complex(x,y)/abs();}
    AnsiString str(){
        AnsiString S;
        S.sprintf("%.2f, %.2f",x,y);
        return S;
    }
};

complex polar(double angle, float r=1){
    return complex(r*cos(angle), r*sin(angle));
}
//---------------------------------------------------------------------------
#endif
