#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    int x,y;
    printf("��������������:");
    scanf("%d,%d",&a,&b);

    x=a%10;
    y=b%10;

    ((a-b)%2)!=0?printf("a,b��λ���ֳ˻�Ϊ��%d\n",x*y):printf("a,b��λ���ֺ�Ϊ��%d\n",x+y);
}
