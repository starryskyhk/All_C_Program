#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    int hour,minute;

    printf("������24Сʱ�Ƶ�ʱ�䣬�ö��Ÿ�����\n");
    scanf("%d,%d",&hour,&minute);
    printf("Enter a 24-hour time:%d:%d\n",hour,minute);
    if(minute<0||minute>60)
        exit(0);

    switch(hour)
    {
        case 0 ... 12 :printf("Equivalent 12-hour time:%d:",hour);break;
        case 13 ... 24:printf("Equivalent 12-hour time:%d:",hour-12);break;
        default:printf("�������\n");exit(0);
    }
    switch(minute)
    {
        case 0 ... 60:printf("%d PM",minute);break;
        default:printf("�������\n");exit(0);
    }

    return 0;
}
