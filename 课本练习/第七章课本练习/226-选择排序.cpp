#include<stdio.h>
int main()
{
    int i,j,n;
    do{
        printf("要对几个数进行排序:");
        scanf("%d",&n);
    }while(n<=1);
    double a[n],t;
    printf("请输入要进行排序的%d个数:\n",n);
    for(i=0;i<n;i++)
        scanf("%lf",&a[i]);
    for(i=0;i<n-1;i++)
    {
        int k=i;//将i的值赋予k
        for(j=i+1;j<n;j++)//从i的后一项开始，
            if(a[k]>a[j])//如果前一项大于后一项
            k=j;//则将j赋给k
        if(i!=k)//当i不等于k时，进行交换
        {
            t=a[k];
            a[k]=a[i];
            a[i]=t;
        }
    }
    printf("排序后为：");
    for(i=0;i<n;i++)
        printf("%10.1f",a[i]);
}
