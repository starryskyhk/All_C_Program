#include<stdio.h>
#include<stdlib.h>
int main()
{
    int month,day,year;//定义年月日
    printf("Enter date(mm/dd/yy):");
    scanf("%d/%d/%d",&month,&day,&year);//输入年月日
    printf("Date this %d ",day);
    switch(day)//对日期进行选择
    {
case 1:case 21:case 31:
    printf("st");
    break;
case 2:case 22:
    printf("nd");
    break;
case 3:case 23:
    printf("rd");
    break;   
}
printf("day of ");
switch(month)//对月份进行转换
{
    case 1:printf("January");break;
    case 2:printf("February");break;
    case 3:printf("March");break;
    case 4:printf("April");break;
    case 5:printf("Mary");break;
    case 6:printf("June");break;
    case 7:printf("July");break;
    case 8:printf("August");break;
    case 9:printf("September");break;
    case 10:printf("October");break;
    case 11:printf("November");break;
    case 12:printf("December");break;
}
printf(",%.2d.\n",year);
return 0;
}
