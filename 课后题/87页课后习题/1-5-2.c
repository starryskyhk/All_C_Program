#include<stdio.h>
#include<math.h>
int main()
{
    double a,c;
    double  b;
    printf("������һ������������");
    scanf("%lf",&a);
    b=((int)(a*1000))%10;
    if(b>=5)
    {
        c=(int)(((int)(a*1000+10))*0.1)*0.01;
    }
    else
    {
        c=(int)(((int)(a*1000))*0.1)*0.01;
    }
    printf("���Ϊ��%f\n",c);
    return 0;
}
