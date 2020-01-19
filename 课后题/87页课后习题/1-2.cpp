#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double a,b,c;
	double t,s,o;
	printf("请输入a,b,c三个数:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	o=b*b-4*a*c;
	if(o>=0)
    {


        t=((-b+sqrt(o))/(2*a));
        s=((-b-sqrt(o))/(2*a));
        printf("两个根为:%f,%f\n",t,s);
        printf("%f",o);
    }
     else
            {
                exit(0);
	 }
            return 0;
            
}
