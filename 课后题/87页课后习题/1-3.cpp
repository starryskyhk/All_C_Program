#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pl 3.14
int main()
{
    double r,h;
    double yzc,ymj,qbmj,qtj,ztj;
    printf("������Բ�뾶��Բ����:\n");
    scanf("%lf,%lf",&r,&h);
    yzc=2*pl*r;
    ymj=pl*r*r;
    qbmj=4*r*r*pl;
    qtj=4./3*pl*r*r*r;
    ztj=yzc*h;
    printf("Բ�ܳ�Ϊ:%.2f\nԲ���Ϊ:%.2f\nԲ������Ϊ:%.2f\nԲ�����Ϊ:%.2f\nԲ�����Ϊ:%.2f\n",yzc,ymj,qbmj,qtj,ztj);
}