#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    a=23,b=-7;
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d%%%d=%d\n",a,b,a%b);//%%Ϊȡ�����˼.
    printf("��֤a%%b=a-a/b*b:");//ע������������ȼ�
    printf("%d==%d\n",a%b,a-a/b*b);
    a=-23,b=7;
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d%%%d=%d\n",a,b,a%b);
    printf("��֤a%%b=a-a/b*b:");
    printf("%d==%d\n",a%b,a-a/b*b);
    a=-23,b=-7;
    printf("%d/%d=%d\n",a,b,a/b);
    printf("%d%%%d=%d\n",a,b,a%b);
    printf("��֤a%%b=a-a/b*b:");
    printf("%d==%d\n",a%b,a-a/b*b);
    return 0;


}

