#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pl 3.14
int main()
{
    double r,h;
    double yzc,ymj,qbmj,qtj,ztj;
    printf("请输入圆半径与圆柱高:\n");
    scanf("%lf,%lf",&r,&h);
    yzc=2*pl*r;
    ymj=pl*r*r;
    qbmj=4*r*r*pl;
    qtj=4./3*pl*r*r*r;
    ztj=yzc*h;
    printf("圆周长为:%.2f\n圆面积为:%.2f\n圆球表面积为:%.2f\n圆球体积为:%.2f\n圆柱体积为:%.2f\n",yzc,ymj,qbmj,qtj,ztj);
}