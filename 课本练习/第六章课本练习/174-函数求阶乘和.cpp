#include<Stdio.h>
int jiecheng(int n)
{
    if(n==1)
    return 1;//如果n为1.则返回1
    else
        return n*jiecheng(n-1);//递归调用，返回n×jiecheng(n-1)

}
int main()
{
    int n,i,sum=0;
    printf("求1到多少的阶乘和：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=jiecheng(i);
        printf("1!+......%d!=%d",n,sum);
}
