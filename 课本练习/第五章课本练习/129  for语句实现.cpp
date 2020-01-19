#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,a,b;
	
       do{
        printf("请输入一个整数：");
        scanf("%d",&num);
    }while(num<=0);
    for(a=0,b=num;b>0;a++)
        b/=10;
    printf("这个整数有%d位\n",a);
    printf("%d的逆顺序是：",num);
    for(b=num;b>0;)
    {
    printf("%d",b%10);
    b/=10;
	}
    return 0;
}
