#include<stdio.h>
#include<stdlib.h>
double jiecheng(int n)//����n�Ľ׳�
{
    double p=1;//����p��ֵΪ1
    int i;
    for(i=1;i<=n;i++)
        p*=i;//ѭ����n�Ľ׳�
    return p;//����p(��n�Ľ׳�)
}

int main()
{
   
    int n,i;
    do{
        printf("��1�����Ľ׳˺ͣ�>1):");
        scanf("%d",&n);
    }while(n<=1);
    double sum=0;
    for(i=1;i<=n;i++)
        sum+=jiecheng(i);//������jiecheng��ֵ������
        printf("��Ϊ��%f",sum);
        return 0;
}
