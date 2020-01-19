#include<stdio.h>
#include<stdlib.h>
int isprme(int number)
{
    int i;
    for(i=2;i<=number/2;i++)
        if(number%i==0)return 0;//如果nuber除i==0则返回假值0,即判断number是否为素数
    return 1;//否则返回真值
}
    int main()
    {
        int even_number;
        do{
          printf("请输入一个偶数：");
          scanf("%d",&even_number);
        }while(!(even_number>0&&even_number%2==0));
        int number;
        for(number=2;number<even_number/2;number++)
        {
            if(isprme(number)&&isprme(even_number-number))//如果都为素数
            {
                printf("%i可分解为:%i+%i\n",even_number,number,even_number-number);
                break;
            }
            if(number>even_number*2)
                printf("错误");
        }

return 0;

}