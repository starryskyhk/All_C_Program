#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a,b,c,d,e;
    double s;
    printf("������5������,��ֱ����5Ԫ,10Ԫ,20Ԫ,50Ԫ,100Ԫ�ĸ���:");
    scanf("%lf,%lf,%lf,%lf,%lf",&a,&b,&c,&d,&e);
    a=5*a;
    b=10*b;
    c=20*c;
     d=50*d;
    e=100*e;
    s=a+b+c+d+e;
    printf("���ý��Ϊ:%f",s);
    return 0;

}
