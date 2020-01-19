#include<stdio.h>
#include<stdlib.h>
int main()
{
   unsigned year;
   int a;
   printf("请输入一个年份：");
   scanf("%d",&year);
   a=(year%4==0&&year&100!=0)||year%400==0;
   if (a)
	   printf("%d是闰年",year);
   else
	   printf("%d不是闰年",year);
   return 0;
}
