#include<stdio.h>
double f(double x)
{
    return 2*x*x*x-4*x*x+3*x-6;//���غ���ֵ

}
double f1(double x)
{
    return 6*x*x-8*x+3;//���غ�������ֵ
}
double jie(void)
{
    double x,x0;
    printf("���������ֵ��");
    scanf("%lf",&x);
    do{
        x0=x;
        x=x0-f(x0)/f1(x0);
    }while((fabs)(x-x0)>=1e-7);
    return x;//���ؽ�
}
int main()
{
    printf("��Ϊ:%f",jie());
	return 0;
}
