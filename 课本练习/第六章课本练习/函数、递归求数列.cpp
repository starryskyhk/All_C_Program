/*#include<stdio.h>
int shulie(int n)
{
    if(n==1||n==2)
        return 1;//如果n为1或2时,返回1
    else
        return shulie(n-1)+shulie(n-2);//其余的则递归返回
}
int main()
{
    int n,i,j=0;
    printf("要求数列的前多少项:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%15d",shulie(i));//从第一项开始输出,直到第n项
        j++;
        if(j%5==0)
            printf("\n");//换行
    }
}*/









#include<stdio.h>
int main()
{
    int n,f1=1,f2=1,i;
    printf("要求数列的前多少项：");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)//循环到n/2
    {
        printf("%5d%5d",f1,f2);//先输出f1,f2
        f1=f1+f2;
        f2=f1+f2;//计算数列
    }
	if(n%2!=0)//如果输入的n是奇数的话
		printf("%5d",f1);//则多输出一个f1
}

