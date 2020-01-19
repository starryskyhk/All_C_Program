#include<stdio.h>
#include<stdlib.h>

int main()
{
    double price,weight;
    int s;
    printf("请输入基本运费,货物重,距离:");
    scanf("%lf,%lf,%d",&price,&weight,&s);
    if(price<0||weight<0)
        printf("输入错误!");
    else
    switch(s)
    {
        case 0 ... 249:printf("总运费为:%f",price*weight*s);break;
        case 250 ... 449:printf("总运费为:%f",price*weight*s*(1-0.02));break;
        case 500 ... 999:printf("总运费为:%f",price*weight*s*(1-0.05));break;
        case 1000 ... 1999:printf("总运费为:%f",price*weight*s*(1-0.08));break;
        case 2000 ... 2999:printf("总运费为:%f",price*weight*s*(1-0.1));break;
        case 3000 ... 9999999999999999999999999999999 :printf("总运费为:%f",price*weight*s*(1-0.15));break;
        default:printf("输入错误!\n");break;

    }
    return 0;
}
