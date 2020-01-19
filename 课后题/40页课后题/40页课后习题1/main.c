#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double a,b;
    double s,c,p,n;
    printf("请输入两个整数:\n");
    scanf("%lf,%lf",&a,&b);
    s=a+b;
    c=a-b;
    p=a*b;
    n=a/b;
    printf("(%f)+(%f)=%f\n",a,b,s);
    printf("((%f)-(%f)=%f\n",a,b,c);
    printf("((%f)*(%f)=%f\n",a,b,p);
    printf("((%f)/(%f)=%f\n",a,b,n);

    return 0;


}
