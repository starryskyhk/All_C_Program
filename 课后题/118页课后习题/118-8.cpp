#include<stdio.h>
#include<stdlib.h>
int main()
{
    double x,y;
    printf("请输入一个x的值:");
    scanf("%lf",&x);
    if(x<1)
         printf("y=%f",x);
      else if(x<10&&x>=1)
        printf("y=%f",2*x*x-1);
      else
        printf("y=%f",3*x*x*x-11);
      return 0;
}
