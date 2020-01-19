#include<stdio.h>
#include<math.h>
int main()
{
    double a,c;
    double  b;
    printf("请输入一个浮点型数：");
    scanf("%lf",&a);
    b=((int)(a*1000))%10;
    if(b>=5)
    {
        c=(int)(((int)(a*1000+10))*0.1)*0.01;
    }
    else
    {
        c=(int)(((int)(a*1000))*0.1)*0.01;
    }
    printf("输出为：%f\n",c);
    return 0;
}
