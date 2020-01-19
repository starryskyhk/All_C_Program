#include<stdio.h>
void main()
{
    char ch1,ch2,ch3,ch4,ch5;
    printf("请输入china:\n");
    scanf("%c%c%c%c%c",&ch1,&ch2,&ch3,&ch4,&ch5);
    ch1=ch1+4;
    ch2=ch2+4;
    ch3=ch3+4;
    ch4=ch4+4;
    ch5=ch5+4;
    printf("加密后china为:%c%c%c%c%c\n",ch1,ch2,ch3,ch4,ch5);

}
