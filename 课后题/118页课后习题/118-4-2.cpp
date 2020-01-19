#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	
    double  number;
    int a;
	char b;
	
h:
    printf("请输入成绩：\n");
    scanf("%lf",&number);
s:
	if(number>=0&&number<=100)
	{
    printf("Enter numerical grade: %f\n",number);
    a=number/10;
	
	
    switch(a)
    {
         case  0:case  1:case  2:case  3:case  4:case  5:
			 printf("Letter grade:F\n");break;
         
         case 6:printf("Letter grade:D\n"); break;
         case 7:printf("Letter grade:C\n"); break;
         case 8:printf("Letter grade:B\n"); break;
         case 9:printf("Letter grade:A\n"); break;

         default:printf("输入错误！请重新输入\n");break;
    }
	printf("输入#结束，输入其他则继续");
    getchar();scanf("%c",&b);

   if(b!='#')
   {goto h;}
   else
    {exit(0);}
	}
	else
		printf("输入错误，请重新输入\n");
	scanf("%lf",&number);
	goto s;
    return 0;
}
