#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;

    printf("请输入两个整数：");
    scanf("%d,%d",&a,&b);
    a*a+b*b>100?printf("a*a+b*b=%d\n",a*a+b*b):printf("a+b=%d\n",a+b);
}
