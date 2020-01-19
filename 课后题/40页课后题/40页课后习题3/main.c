#include<stdio.h>
#include<stdlib.h>
#define pal 3.14
int main()
{
    double r;
    double v;
    printf("请输入球体的半径:\n");
    scanf("%lf",&r);
    v=4./3*r*r*r*pal;
    printf("球体体积为:%f",v);
    return 0;

}
