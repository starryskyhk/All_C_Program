#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num1,num2,num,add_sub,max;
    char sign,s;

	printf("����#����ѵ��,�������������ѵ����");
	while((s=getchar())!='#')
    {
		
    printf("������Ҫ���е�����(1:-,����:+)");
    scanf("%d",&add_sub);
    printf("������Ҫ���ж������ڵ�����(<=%d):",RAND_MAX);
    scanf("%d",&max);
    srand((unsigned)time(NULL));
    num1=rand()%max;
    num2=rand()%max;
    sign=(add_sub==1?'-':'+');
    printf("\n(%d)%c(%d)=",num1,sign,num2);
    scanf("%d",&num);
    if(add_sub==1)
        if(num1-num2==num)
        printf("OK!\n");
        else
        printf("ERROR!\n");
    else
        if(num1+num2==num)
        printf("OK!\n");
        else
            printf("ERROR!\n");
        getchar();
		

		 
}
        return 0;
}
