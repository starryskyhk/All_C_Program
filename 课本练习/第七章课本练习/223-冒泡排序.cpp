#include<stdio.h>
int main()
{
    int n,i,j;
    do{
        printf("要对几个数进行排序：");
        scanf("%d",&n);
    }while(n<=1);
    double a[n],t;
    printf("输入要排序的%d个数（空格隔开）：",n);
for(i=0;i<n;i++)
    scanf("%lf",&a[i]);//给每个数组赋予值
for(i=1;i<n;i++)//循环
    for(j=0;j<n-i;j++)//循环
{
    if(a[j]>a[j+1])
    {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;//两个数交换
    }

}
for(i=0;i<n;i++)
    printf("%10.2f",a[i]);

}
