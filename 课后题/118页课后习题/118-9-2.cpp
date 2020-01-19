#include<stdio.h>
#include<stdlib.h>

int main()
{
    double price,weight;
    int s;
    printf("请输入基本运费,货物重,距离:");
    scanf("%lf,%lf,%d",&price,&weight,&s);
    if(price<0||weight<0||s<0)
        printf("输入错误!");
    else
    switch((int)(s/250))
    {
        case 0 :printf("总运费为:%f",price*weight*s);break;
        case 1:printf("总运费为:%f",price*weight*s*(1-0.02));break;
        case 2:printf("总运费为:%f",price*weight*s*(1-0.05));break;
        case 4:printf("总运费为:%f",price*weight*s*(1-0.08));break;
        case 8:printf("总运费为:%f",price*weight*s*(1-0.1));break;
        default :printf("总运费为:%f",price*weight*s*(1-0.15));break;


    }
    return 0;
}
