#include<stdio.h>
int main()
{
    double score;
    double MIN=0,MAX=100;
    double min=MAX,max=MIN;
    double count=0,total=0;
    printf("输入成绩（0-100）q退出：\n");
    while(scanf("%lf",&score)==1)
    {
        while(getchar()!='\n');
        if(score>MAX||score<MIN)
            {
                printf("数据错误，重新输入\n");
        continue;
        }
        printf("输入的有效成绩：%.2f\n",score);
        min=score<min?score:min;
        max=score>max?score:max;
        total+=score;
        count++;
        printf("输入成绩，Q退出\n");
    }
    if(count>0)
    {
        printf("%10s%10s%10s\n","最低分","最高分","平均值");
        printf("%10.2f%10.2f%10.2f\n",min,max,total/count);
    }
    else
    {
        printf("用户结束了程序");
    }
    return 0;
}