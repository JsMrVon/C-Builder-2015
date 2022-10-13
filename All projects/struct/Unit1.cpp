//---------------------------------------------------------------------------

#include <vcl.h>
#include <conio.h>
#include <stdio.h>
#pragma hdrstop
//---------------------------------------------------------------------------
#pragma argsused
//Григорьев, Минеев, 40-109б

void f1(){
    printf("ab\n");
}

void f2(){
    for(int i=234;i>189;i=i-1){
        printf("%d,",i);
    }
    printf("\n");
}
void f3(){
    for(long int i=1000000000;i>0;i=i/10){
        printf("%d,",i);
    }
    printf("\n");
}
struct myType{
    int n;
    float x;
    char s[100];
    void show(){
        printf("[%d,%.7f,%s]\n",n,x,s);
    }
}a,b;
void f4(){
    a.n=5; a.x=5.3; strcpy(a.s,"hello A");
    b.n=7; b.x=7.2; strcpy(b.s,"hello B");
    printf("%d\t%.4f\t%s\n",a.n,a.x,a.s);
    printf("%d\t%.4f\t%s\n",b.n,b.x,b.s);
    a.show(); b.show();
}
struct TPeople{
    int age, iq;
    float weight, height;
    char name[50];
    void show(){
        printf("[age=%d, iq=%d, weight=%.3f, height=%.5f, name=%s]\n",age,iq,weight,height,name);
    }
};
void f5(){
    TPeople p1,p2;
    p2.age=18; p2.iq=172; p2.weight=69; p2.height=171; strcpy(p2.name,"Vlad Mineev");
    p1.age=20; p1.iq=125; p1.weight=70; p1.height=177; strcpy(p1.name,"Vladimir Grigoryev");
    p1.show();
    p2.show();
}

int main(int argc, char* argv[])
{
    f1();
    f2();
    f3();
    f4();
    f5();
    getch();
    return 0;
}
//---------------------------------------------------------------------------



