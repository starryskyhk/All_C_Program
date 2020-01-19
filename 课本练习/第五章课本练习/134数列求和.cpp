#include<stdio.h>
#include<stdlib.h>
int main()
{
    int terms,i;
    double sum,a,b;
    do{
        printf("要求数列:2/1+3/2+5/3+8/5...前几项之和(>=1):");
        scanf("%d",&terms);}while(terms<1);//防止用户输入错误
        a=2,b=1,sum=0;
        for(i=1;i<=terms;i++)//限制求前几项的和
        {
            sum+=a/b;//数列求和
            a=a+b;//数列的分子
            b=a-b;//数列的分母
        }
        printf("结果为:%lf",sum);//输出结果


}
