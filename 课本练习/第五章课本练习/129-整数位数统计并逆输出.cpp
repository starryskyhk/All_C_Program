#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,num;
    do
    {
        printf("请输入一个非负整数");
        scanf("%d",&num);

    }while(num<=0);//循环判断Num的正确与否
    a=0,b=num;//初始化a值，并将num赋给b，防止直接在num上运算，导致输出错误。
    do{
        b/=10;
        a++;
    }while(b>0);
    printf("%d是%d位整数\n",num,a);
    b=num;
    printf("%d的逆顺序是",num);
    do{
        printf("%d",b%10);//取出数字的个位
        b/=10;//除10取整，然后再循环，以此来逆向输出num的值。
    }while(b>0);
    printf("\n");
    return 0;
}