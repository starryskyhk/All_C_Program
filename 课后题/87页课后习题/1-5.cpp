#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    printf("请输入一个浮点型数：");
    scanf("%lf",&a);
    b=((int)(a*100+0.5))*0.01;

    printf("结果为：%f\n",b);

    }
