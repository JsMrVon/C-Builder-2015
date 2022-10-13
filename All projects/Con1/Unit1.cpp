//Влад Минеев 4о-109Б
//---------------------------------------------------------------------------
#include <conio.h>
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
void f1(){
    printf("a\nb\n");

}
void f2(){
    int a=7, b=2, c;
    printf("%d\n%d\n%d\n",a,b,c);

}

void f3(){
    int a,b;
    scanf("%d%d", &a, &b);
    int c=a+b;
    printf("%d\n",c);

}
void f4(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int d=a*b*c;
    printf("%d\n", d);
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
