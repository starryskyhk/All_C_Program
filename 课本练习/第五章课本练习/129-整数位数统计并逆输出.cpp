#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,num;
    do
    {
        printf("������һ���Ǹ�����");
        scanf("%d",&num);

    }while(num<=0);//ѭ���ж�Num����ȷ���
    a=0,b=num;//��ʼ��aֵ������num����b����ֱֹ����num�����㣬�����������
    do{
        b/=10;
        a++;
    }while(b>0);
    printf("%d��%dλ����\n",num,a);
    b=num;
    printf("%d����˳����",num);
    do{
        printf("%d",b%10);//ȡ�����ֵĸ�λ
        b/=10;//��10ȡ����Ȼ����ѭ�����Դ����������num��ֵ��
    }while(b>0);
    printf("\n");
    return 0;
}