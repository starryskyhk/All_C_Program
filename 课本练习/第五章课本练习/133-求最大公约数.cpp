/*#include<stdio.h>
void main()
{
    int n1,n2;
    int factor;
    do{
        printf("���������Ǹ�������");
        scanf("%d,%d",&n1,&n2);
    }while(n1<=0||n2<=0);
    factor=n1<n2?n1:n2;
    for(;n1%factor||n2%factor;)
        factor--;
    printf("%d��%d�����Լ��Ϊ%d",n1,n2,factor);
}*/

#include<stdio.h>
void main()
{
    int n1,n2,factor;
    do{
        printf("�����������Ǹ�����:");
        scanf("%d,%d",&n1,&n2);

    }while(n1<=0||n2<=0);
    factor=n1<n2?n1:n2;
    while(n1%factor||n2%factor)
    {
        factor--;

    }
    printf("%d��%d�����Լ��Ϊ%d",n1,n2,factor);
}
