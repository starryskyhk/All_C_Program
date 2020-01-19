#include<stdio.h>
#include<stdlib.h>
double jiecheng(int n)//返回n的阶乘
{
    double p=1;//定义p初值为1
    int i;
    for(i=1;i<=n;i++)
        p*=i;//循环求n的阶乘
    return p;//返回p(即n的阶乘)
}

int main()
{
   
    int n,i;
    do{
        printf("求1到几的阶乘和（>1):");
        scanf("%d",&n);
    }while(n<=1);
    double sum=0;
    for(i=1;i<=n;i++)
        sum+=jiecheng(i);//将函数jiecheng的值加起来
        printf("和为：%f",sum);
        return 0;
}
