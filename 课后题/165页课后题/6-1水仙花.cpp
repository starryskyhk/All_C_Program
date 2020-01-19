#include<stdio.h>
int main()
{
    int i,a,b,c;
printf("100到1000的水仙花数有：");
for(i=100;i<1000;i++)
{
    a=i%10;
b=i/10%10;
c=i/100%10;
if(a*a*a+b*b*b+c*c*c==i)
    printf("%5d",i);
}
return 0;

}
