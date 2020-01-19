#include<stdio.h>
#include<math.h>
void main()
{
    int u_number1,u_number2;
    int u_number;
    printf("请输入两个两位数:\n");
    scanf("%d,%d",&u_number1,&u_number2);
    unsigned num4,num5,num6,num7;
    num4=u_number1%10;//分离第一个数字的个位
    num5=u_number1/10%10;//分离第一个数字的十位
     num6=u_number2%10;//分离第二个数字的个位
    num7=u_number2/10%10;//分离第二个数字的十位
    u_number=num4*1000+num5*100+num6*10+num7;
    printf("%d\n",u_number);

}
