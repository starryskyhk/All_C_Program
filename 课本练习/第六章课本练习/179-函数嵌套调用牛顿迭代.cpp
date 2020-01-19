#include<stdio.h>
double f(double x)
{
    return 2*x*x*x-4*x*x+3*x-6;//返回函数值

}
double f1(double x)
{
    return 6*x*x-8*x+3;//返回函数导数值
}
double jie(void)
{
    double x,x0;
    printf("输入迭代初值：");
    scanf("%lf",&x);
    do{
        x0=x;
        x=x0-f(x0)/f1(x0);
    }while((fabs)(x-x0)>=1e-7);
    return x;//返回解
}
int main()
{
    printf("解为:%f",jie());
	return 0;
}
