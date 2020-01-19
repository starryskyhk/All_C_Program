#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a,b,c,d,e;
    double s;
    printf("请输入5个数字,其分别代表5元,10元,20元,50元,100元的个数:");
    scanf("%lf,%lf,%lf,%lf,%lf",&a,&b,&c,&d,&e);
    a=5*a;
    b=10*b;
    c=20*c;
     d=50*d;
    e=100*e;
    s=a+b+c+d+e;
    printf("所得结果为:%f",s);
    return 0;

}
