#include<stdio.h>
#include<math.h>
void main()
{
    int u_number1,u_number2;
    int u_number;
    printf("������������λ��:\n");
    scanf("%d,%d",&u_number1,&u_number2);
    unsigned num4,num5,num6,num7;
    num4=u_number1%10;//�����һ�����ֵĸ�λ
    num5=u_number1/10%10;//�����һ�����ֵ�ʮλ
     num6=u_number2%10;//����ڶ������ֵĸ�λ
    num7=u_number2/10%10;//����ڶ������ֵ�ʮλ
    u_number=num4*1000+num5*100+num6*10+num7;
    printf("%d\n",u_number);

}
