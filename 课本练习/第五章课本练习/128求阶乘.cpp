#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    double p;
    printf("计算几的阶乘:");
    scanf("%d",&n);
    while(n<=0)
    {
        printf("数据错误!请输入不小于1的整数");
        scanf("%d",&n);

    }
    i=1,p=1;
    do
    {
        p*=i;
        i++;
    }while(i<=n);
    printf("%d!=%.f",n,p);/*%.lf  浮点小数位0位输出*/
    return 0;
}