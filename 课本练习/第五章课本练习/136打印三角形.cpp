#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row;
    do{
        printf("������ͼ��������(>1):");
        scanf("%d",&row);

    }while(row<1);
    for(int i=1;i<=row;i++)//�����������м���
    {
        for(int j=1;j<=row;j++)//����ÿ��ǰ�ж��ٿո�
            printf(" ");
        for(int k=1;k<=2*i-1;k++)//�����п���ÿһ���ж���*
            printf("*");//���*
        printf("\n");//����

    }
    return 0;

}
