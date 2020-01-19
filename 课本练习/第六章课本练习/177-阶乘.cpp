#include<stdio.h>
int jiecheng(int n)
{
    double p=1;
    int i;
    for(i=1;i<=n;i++)
        p*=i;//计算阶乘
    return p;//返回阶乘p值
}
int main()
{
    int m,n;
    printf("请输入m与n的值：");
    scanf("%d,%d",&m,&n);
    printf("%d",jiecheng(m)/(jiecheng(n)*jiecheng(m-n)));//输出


}
