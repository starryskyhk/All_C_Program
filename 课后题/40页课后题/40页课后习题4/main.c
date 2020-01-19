#include<stdio.h>
#include<stdlib.h>
int main()
{
    double x;
    double s;
    printf("请输入一位数:\n");
    scanf("%lf",&x);
    s=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
    printf("结果为:%f",s);
    return 0;

}
