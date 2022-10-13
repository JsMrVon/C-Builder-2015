//---------------------------------------------------------------------------
#include <conio.h>
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------
//Бышкин Андрей и Минеев Влад, 4о-109б
void f1(){
    printf("something");
}

void f2(){
    int a, b, c;
    scanf("%d\n%d\%d", &a, &b, &c);
    int d=a+b+c;
    printf("%d\n", d);
}

void f3(){
    int a11, a12, a21, a22;
    scanf("%d\n%d\n%d\n%d", &a11, &a12, &a21, &a22);
    int det=a11*a22-a12*a21;
    printf("%d\n", det);
}

void f4(){
    int a, b, c, d, e, f, g, h, i;
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e, &f, &g, &h, &i);
    int det3=b*f*g-b*d*i-a*f*h+c*d*h+a*i*e-c*g*e;
    printf("%d\n", det3);
}

void f5() {
    int a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44;
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", &a11, &a12, &a13, &a14, &a21, &a22, &a23, &a24, &a31, &a32, &a33, &a34, &a41, &a42, &a43, &a44);
    int det4=a11*a22*a33*a44-a11*a22*a34*a43-a11*a23*a32*a44+a11*a23*a42*a34+a11*a32*a24*a43-a11*a24*a33*a42-a12*a21*a33*a44+a12*a21*a34*a43+a12*a31*a23*a44-a12*a31*a24*a43-a12*a23*a41*a34+a12*a41*a24*a33+a21*a13*a32*a44-a21*a13*a42*a34-a21*a14*a32*a43+a21*a14*a33*a42-a13*a22*a31*a44+a13*a22*a41*a34+a13*a31*a24*a42-a13*a32*a41*a24+a22*a31*a14*a43-a22*a14*a41*a33-a31*a14*a23*a42+a14*a23*a32*a41;
    printf("%d\n", det4);
}


#pragma argsused
int main(int argc, char* argv[])
{
    //f1();
    //f2();
    //f3();
    //f4();
    f5();
    getch();
    return 0;
}
//---------------------------------------------------------------------------
 