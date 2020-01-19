#include<stdio.h>
void fun(int n)
{
    printf("%d",n%10);//取出个位
if(n/10!=0)//如果除10取整不是0
    fun(n/10);//那么返回除10取整

}
void main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("你想输出为：");
    fun(n);
}
