#include<stdio.h>
#include<stdlib.h>
struct xuanpiao
{
    char name[20];
    int num;//定义一个结构体，成员为姓名及一个数
};
int main()
{
    int i,n;
int max=stu[0].num;//定义一个最大值，初值为第一个学生的票数
		  int  j=0;
    struct xuanpiao stu[3]={{"张三",0},{"李四",0},{"王五",0}};//定义这个结构体为数组，并对其进行初始化
    printf("支持谁就回复对应的序号:\n1:张三   2:李四   3:王五\n");//给予用户提示
    for(i=1;i<=5;i++)
    {
        h:scanf("%d",&n);//让用户进行输入
        if(n==1)
            stu[0].num++;
        else if(n==2)
             stu[1].num++;
        else if(n==3)
             stu[2].num++;//如果满足相应的条件，则相应的计数器加1
        else
        {
            printf("输入错误，请重新输入：");
            goto h;//输入其他则返回
        }
    }
    printf("%15s%15s%15s\n","张三","李四","王五");
    printf("%15d%15d%15d",stu[0].num++,stu[1].num++,stu[2].num++);//显示出每个人的得票数
//	int max=stu[0].num;//定义一个最大值，初值为第一个学生的票数
		  //int  j=0;
	for(i=1;i<3;i++)
	{
	if(max<stu[i].num)
		max=stu[i].num,j=i;//如果后面的同学票数大于此同学，则将后面的这个值赋给max，并将其下标付给j

	}
    printf("\n最终获选人为：%s",stu[j].name);//输出最终获选人
    return 0;
}
