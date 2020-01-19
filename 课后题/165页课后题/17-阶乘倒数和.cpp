#include<stdio.h>
int main()
{
    double n,sum;int i;
    do{
        printf("请输入求1到多少阶乘倒数和：");
        scanf("%lf",&n);
    }while(n<0);
    for(i=1;i<=n;i++)
    {
        double p=1;
        unsigned j=1;
        while(j<=i)
        {
            p*=j;
            j++;
        }//求出当前的阶乘
        sum=1/p+sum;//之前的和加上此次的阶乘倒数和
    }
    printf("%f",sum+1);//题目条件限制
	return 0;
}
