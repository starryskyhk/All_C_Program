#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	
    double  number;
    int a;
	char b;
	
h:
    printf("������ɼ���\n");
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

         default:printf("�����������������\n");break;
    }
	printf("����#�������������������");
    getchar();scanf("%c",&b);

   if(b!='#')
   {goto h;}
   else
    {exit(0);}
	}
	else
		printf("�����������������\n");
	scanf("%lf",&number);
	goto s;
    return 0;
}
