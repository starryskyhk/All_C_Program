#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2,d;
	printf("������a,b,c������:");
	scanf("%d,%d,%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(a==0)
        {
            x1=x2=-c/b;
    printf("��a=0ʱ,���̵ĸ�Ϊ:%f\n",x1);
    }
    else if(d==0)
    {
        x1=x2=-b/2*a;
    printf("��b*b-4*a*c=0ʱ,���̵ĸ�Ϊ:%f\n",x1);
    }
    else if(d<0)
        {
            printf("��b*b-4*a*c<0ʱ,����û�н�!\n");
            }
    else
    {
         x1=((-b+sqrt(d))/(2*a));
        x2=((-b-sqrt(d))/(2*a));
        printf("��b*b-4*a*c>0ʱ,���̵�������Ϊ:%f,%f\n",x1,x2);
    }
       return 0;
}

