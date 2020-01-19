#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int y;
    int z;
    double x;
	printf("一号汽油售价6.75元/升,二号汽油售价5.25元/升,三号汽油售价4.85元/升\n");//给用户提醒每种有的价格
    printf("请选择汽油标号  1:(type1)2:(type2)3:(type3)\n");
 
    scanf("%d",&y);//让用户输入
    if(!(y==1||y==2||y==3))//判断用户输入的是否为所提供的1,2,3
       {

        printf("输入错误!\n");//若不是则显示输入错误并结束程序
        exit(0);}
   else//若是,则进行下一步
    {printf("请选择服务类型  1:(自助加)2:(协助加)\n");
    printf("自助加可优惠5%%,协助加优惠10%%\n");
    scanf("%d",&z);}
    if(!(z==1||z==2))//同上
        {printf("输入错误!");
    exit(0);}
    else
    {printf("请输入你要加多少升油:");
    scanf("%lf",&x);}
   switch(y)
   {
   case 1://当输入的y为1时
    if(z==1)//并且z等于1时,运行如下
        printf("应该支付%f",6.75*x*(1-0.05));
    else if(z==2)//输入的y为1并且z为2时
        printf("应该支付%f",6.75*x*(1-0.1));

     break;
   case 2:
     if(z==1)//同上
        printf("应该支付%f",5.25*x*(1-0.05));
    else if(z==2)
        printf("应该支付%f",5.25*x*(1-0.1));

    break;
   case 3:
    if(z==1)
        printf("应该支付%f",4.85*x*(1-0.05));
    else if(z==2)
        printf("应该支付%f",4.85*x*(1-0.1));

    break;
   default:
    printf("输入错误!\n");

   }

}
