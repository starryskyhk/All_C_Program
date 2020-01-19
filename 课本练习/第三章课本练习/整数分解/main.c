#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned number;
    printf("请输入一个三位正整数：");
    scanf("%d",&number);
    unsigned num1, num2, num3;
    num1=number%10;
    num2 =number/10%10;
    num3=number/100%10;
    printf("整数%d可分解为：",number);
    printf("%d*100+%d*10+%d*1\n",num3,num2,num1);
    return 0;
}
