#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum,n1;
    sum=0;
    do{
        printf("请输入一个正整数：");
        scanf("%d",&n);
    }while(n<0);//限制输入，必须输入大于0
    for(i=0;;i++)//循环条件，为无限循环
    {
        n1=n%10;//对这个数取余
        n/=10;//除10取整  
        sum+=n1;//将所得到的每位数相加
		if(n==0)//如果n等于0了，则结束循环
			break;
    }
    printf("%d\n",sum);
    return 0;

}
