//---------------------------------------------------------------------------

#include <vcl.h>
#include <conio.h>
#include <stdio.h>
#pragma hdrstop
#include <math.h>

//---------------------------------------------------------------------------

#pragma argsused

//Григорьев, Минеев, 4о-109б

void f1(){
    printf("abc\n");
}
void f2(){
    for(int i=5;i<=60;i=i+5){
        printf("%d ",i);
    }
    printf("\n");
}
struct TBox{
    float length,width,height;
    TBox(){
        length=0; width=0; height=0;
        printf("c1\n");
    }
    TBox(float l,float w,float h){
        length=l; width=w; height=h;
        printf("c2\n");
    }
    void show(){
        printf("[%.5f,%.5f,%.5f]\n",length,width,height);
    }
};
void f3(){
    TBox a,b,c,d(0,3,4),e=TBox(5,6,7);
    a.show(); b.show(); c.show(); d.show(); e.show();
    a=d; a.show();
    TBox(11,12,13).show();
}
struct vec{
    float x,y,z;
    vec(){x=0;y=0;z=0;}
    vec(float x0, float y0, float z0){
        x=x0; y=y0; z=z0;
    }
    void show(){
        printf("[%.5f,%.5f,%.5f]\n",x,y,z);
    }
    void printLen(){
        float len=sqrt(x*x+y*y+z*z);
        printf("%.7f",len);
    }
    friend vec operator +(vec a, vec b){
        vec c;
        c.x=a.x+b.x; c.y=a.y+b.y;
        c.z=a.z+b.z;
        return c;
    }
};
void f4(){
    vec a,b(3,0,4),c=vec(),d=vec(40,30,0);
    a.show(); b.show(); c.show(); d.show();
    a.printLen();
    printf("\n");
    d.printLen();
    printf("\n");
    (b+d).show();
    vec(1.5,2,0).printLen();
}

int main(int argc, char* argv[])
{
    //f1();
    //f2();
    //f3();
    f4();
    getch();
    return 0;
}
//---------------------------------------------------------------------------

