#include<stdio.h>
#include<stdlib.h>

int main()
{
    double price,weight;
    int s;
    printf("����������˷�,������,����:");
    scanf("%lf,%lf,%d",&price,&weight,&s);
    if(price<0||weight<0)
        printf("�������!");
    else
    switch(s)
    {
        case 0 ... 249:printf("���˷�Ϊ:%f",price*weight*s);break;
        case 250 ... 449:printf("���˷�Ϊ:%f",price*weight*s*(1-0.02));break;
        case 500 ... 999:printf("���˷�Ϊ:%f",price*weight*s*(1-0.05));break;
        case 1000 ... 1999:printf("���˷�Ϊ:%f",price*weight*s*(1-0.08));break;
        case 2000 ... 2999:printf("���˷�Ϊ:%f",price*weight*s*(1-0.1));break;
        case 3000 ... 9999999999999999999999999999999 :printf("���˷�Ϊ:%f",price*weight*s*(1-0.15));break;
        default:printf("�������!\n");break;

    }
    return 0;
}
