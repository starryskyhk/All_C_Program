#include<stdio.h>
int main()
{
    int i,j,n;
    do{
        printf("Ҫ�Լ�������������:");
        scanf("%d",&n);
    }while(n<=1);
    double a[n],t;
    printf("������Ҫ���������%d����:\n",n);
    for(i=0;i<n;i++)
        scanf("%lf",&a[i]);
    for(i=0;i<n-1;i++)
    {
        int k=i;//��i��ֵ����k
        for(j=i+1;j<n;j++)//��i�ĺ�һ�ʼ��
            if(a[k]>a[j])//���ǰһ����ں�һ��
            k=j;//��j����k
        if(i!=k)//��i������kʱ�����н���
        {
            t=a[k];
            a[k]=a[i];
            a[i]=t;
        }
    }
    printf("�����Ϊ��");
    for(i=0;i<n;i++)
        printf("%10.1f",a[i]);
}
