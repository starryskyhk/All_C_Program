#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2,d;
	printf("请输入a,b,c三个数:");
	scanf("%d,%d,%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(a==0)
        {
            x1=x2=-c/b;
    printf("当a=0时,方程的根为:%f\n",x1);
    }
    else if(d==0)
    {
        x1=x2=-b/2*a;
    printf("当b*b-4*a*c=0时,方程的根为:%f\n",x1);
    }
    else if(d<0)
        {
            printf("当b*b-4*a*c<0时,方程没有解!\n");
            }
    else
    {
         x1=((-b+sqrt(d))/(2*a));
        x2=((-b-sqrt(d))/(2*a));
        printf("当b*b-4*a*c>0时,方程的两个根为:%f,%f\n",x1,x2);
    }
       return 0;
}

