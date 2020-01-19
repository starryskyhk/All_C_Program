#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum1,sum2,i;
    sum1=0;sum2=0;
    do{
        printf("计算正整数1到多少的和：");
        scanf("%d",&n);
    }while(n<1);
    for(i=1;i<=n;i++)  //循环n次
    {
        if(i%2==0)//当i是偶数时
        sum1+=i;//加到sum1上
        else//为奇数时
            sum2+=i;//加到sum2上

    }
    printf("偶数之和为：%d",sum1);
    printf("奇数之和为：%d",sum2);
    return 0;
}
