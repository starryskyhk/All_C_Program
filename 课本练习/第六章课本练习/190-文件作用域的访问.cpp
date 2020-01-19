#include<stdio.h>
#include<stdlib.h>
int a,b,c;//在整个程序中起作用
float f1(float x)
{
    return a*x*x+b*x+c;
}
float p;//在f2()和mian()函数中起作用
void f2(float x)
{

    p=a*(b*x+c);//将计算结果赋予p,

}
int main()
{
    float x,y;
    a=2,b=3,c=4;
    printf("x=?");
    scanf("%f",&x);
    y=f1(x);f2(x);
    printf("f1(%f)=%f\n",x,y);
    printf("f2(%f)=%f\n",x,p);
    return 0;
}
