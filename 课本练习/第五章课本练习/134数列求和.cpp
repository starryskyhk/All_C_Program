#include<stdio.h>
#include<stdlib.h>
int main()
{
    int terms,i;
    double sum,a,b;
    do{
        printf("Ҫ������:2/1+3/2+5/3+8/5...ǰ����֮��(>=1):");
        scanf("%d",&terms);}while(terms<1);//��ֹ�û��������
        a=2,b=1,sum=0;
        for(i=1;i<=terms;i++)//������ǰ����ĺ�
        {
            sum+=a/b;//�������
            a=a+b;//���еķ���
            b=a-b;//���еķ�ĸ
        }
        printf("���Ϊ:%lf",sum);//������


}
