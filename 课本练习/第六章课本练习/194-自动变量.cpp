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
        a=2*b;//ʹ�����������b,c�ı���main()�����е�aֵ
        printf("%d,%d,%d\n",a,b,c);//����ı���a����������ڵ�b,c��
    }
    printf("%d,%d,%d\n",a,b,c);//����ı���a,main()�����е�b����main�����б��ı��c
    return 0;
}
