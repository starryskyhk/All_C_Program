#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;

    printf("������һ����λ����:");
    scanf("%d",&a);
    unsigned num1,num2,num3,num4;
    num1=a%10;//�����λ����
    num2=a/10%10;
    num3=a/100%10;
    num4=a/1000%10;
if(!(a>9999||a<1000))
{
    printf("%d\n",num1+num2+num3+num4);
    printf("%d\n",num1*num2*num3*num4);
}
else
{
     exit(0);
}

    return 0;
}
