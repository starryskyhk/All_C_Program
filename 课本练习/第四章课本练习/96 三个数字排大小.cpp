#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,num3;
    int num;
    printf("��������������:");
    scanf("%d,%d,%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        num=num1;
        num1=num2;
        num2=num;
    }
    if(num1>num3)
    {
        num=num1;
        num1=num3;
        num3=num;
    }
    if(num2>num3)
    {
        num=num2;
        num2=num3;
        num3=num;
    }
    printf("��������С����Ϊ:%d,%d,%d",num1,num2,num3);
    return 0;
}
