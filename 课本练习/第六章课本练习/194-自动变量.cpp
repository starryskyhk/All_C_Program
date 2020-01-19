#include<stdio.h>
#include<stdlib.h>
int c=1;
int main()
{
    int a=2,b=3;
    a=b;
    c=a;
    {
        int b=5,c=6;
        a=2*b;//使用这个块区的b,c改变了main()函数中的a值
        printf("%d,%d,%d\n",a,b,c);//输出改变后的a和这个块区内的b,c；
    }
    printf("%d,%d,%d\n",a,b,c);//输出改变后的a,main()函数中的b和在main函数中被改变的c
    return 0;
}
