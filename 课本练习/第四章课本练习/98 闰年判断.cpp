#include<stdio.h>
#include<stdlib.h>
int main()
{
   unsigned year;
   int a;
   printf("������һ����ݣ�");
   scanf("%d",&year);
   a=(year%4==0&&year&100!=0)||year%400==0;
   if (a)
	   printf("%d������",year);
   else
	   printf("%d��������",year);
   return 0;
}
