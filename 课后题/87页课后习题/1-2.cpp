#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double a,b,c;
	double t,s,o;
	printf("������a,b,c������:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	o=b*b-4*a*c;
	if(o>=0)
    {


        t=((-b+sqrt(o))/(2*a));
        s=((-b-sqrt(o))/(2*a));
        printf("������Ϊ:%f,%f\n",t,s);
        printf("%f",o);
    }
     else
            {
                exit(0);
	 }
            return 0;
            
}
