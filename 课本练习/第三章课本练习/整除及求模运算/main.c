#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    a=23,b=-7;
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d%%%d=%d\n",a,b,a%b);//%%为取余的意思.
    printf("验证a%%b=a-a/b*b:");//注意符号运算优先级
    printf("%d==%d\n",a%b,a-a/b*b);
    a=-23,b=7;
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d%%%d=%d\n",a,b,a%b);
    printf("验证a%%b=a-a/b*b:");
    printf("%d==%d\n",a%b,a-a/b*b);
    a=-23,b=-7;
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d%%%d=%d\n",a,b,a%b);
    printf("验证a%%b=a-a/b*b:");
    printf("%d==%d\n",a%b,a-a/b*b);
    return 0;


}

