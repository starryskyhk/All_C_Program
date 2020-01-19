#include<stdio.h>
int main()
{
    int n,i,n1;
    do{
        printf("请输入一个非负正整数且个位不为0：");
        scanf("%d",&n);
    }while(n<10||n>=100||n%10==0);//防止出现不是二位数的或者个位为0的
     n1=n%10*10+n/10;//计算交换后的数
    int sum=0;//初始化计数器的值
    for(i=11;i<=99;i++)//从11开始穷举
    {
        if(i%10==0)//碰到个位为0的，返回循环，不进行下面操作
            continue;
        int i_refore=i%10*10+i/10;//i的交换后的值
        if(n+i==n1+i_refore)//判断条件，如果成立
        {
            printf("%d+%d=%d+%d\n",n,i,n1,i_refore);//则输出
            sum++;//计数器加一
        }
    }
    if(sum<0)
    {
        printf("不存在");

    }
    return 0;

           }
