#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned number;
    printf("������һ����λ��������");
    scanf("%d",&number);
    unsigned num1, num2, num3;
    num1=number%10;
    num2 =number/10%10;
    num3=number/100%10;
    printf("����%d�ɷֽ�Ϊ��",number);
    printf("%d*100+%d*10+%d*1\n",num3,num2,num1);
    return 0;
}
