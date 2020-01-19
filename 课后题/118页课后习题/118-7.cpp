#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    int x,y;
    printf("请输入两个整数:");
    scanf("%d,%d",&a,&b);

    x=a%10;
    y=b%10;

    ((a-b)%2)!=0?printf("a,b个位数字乘积为：%d\n",x*y):printf("a,b个位数字和为：%d\n",x+y);
}
