#include<stdio.h>
int main()
{
    int n,i,j;
    do{
        printf("Ҫ�Լ�������������");
        scanf("%d",&n);
    }while(n<=1);
    double a[n],t;
    printf("����Ҫ�����%d�������ո��������",n);
for(i=0;i<n;i++)
    scanf("%lf",&a[i]);//��ÿ�����鸳��ֵ
for(i=1;i<n;i++)//ѭ��
    for(j=0;j<n-i;j++)//ѭ��
{
    if(a[j]>a[j+1])
    {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;//����������
    }

}
for(i=0;i<n;i++)
    printf("%10.2f",a[i]);

}
