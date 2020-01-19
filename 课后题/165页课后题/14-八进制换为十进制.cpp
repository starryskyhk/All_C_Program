#include<stdio.h>
int main()
{
    int n=1;
    int sum=0;
    int  num,n1;

        printf("输入一个八进制数：");
        scanf("%o",&num);
        n1=num;
while(n1!=0)
{
    sum+=n1%8*n;
    n1/=8;
    n=n*8;
}
printf("%d",sum);
return 0;
}
