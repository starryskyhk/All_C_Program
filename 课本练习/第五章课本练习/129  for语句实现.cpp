#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,a,b;
	
       do{
        printf("������һ��������");
        scanf("%d",&num);
    }while(num<=0);
    for(a=0,b=num;b>0;a++)
        b/=10;
    printf("���������%dλ\n",a);
    printf("%d����˳���ǣ�",num);
    for(b=num;b>0;)
    {
    printf("%d",b%10);
    b/=10;
	}
    return 0;
}
