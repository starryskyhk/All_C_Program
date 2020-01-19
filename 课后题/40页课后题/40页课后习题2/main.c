#include <stdio.h>
#include <stdlib.h>
#define pal 3.14
int main()
{
    double r;
    double c,s;
    printf("请输入圆形的半径");
    scanf("%lf",&r);
    c=2*r*pal;
    s=pal*r*r;
    printf("圆形的周长和面积分别是:%f,%f",c,s);
    return 0;
}
