#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum1,sum2,i;
    sum1=0;sum2=0;
    do{
        printf("����������1�����ٵĺͣ�");
        scanf("%d",&n);
    }while(n<1);
    for(i=1;i<=n;i++)  //ѭ��n��
    {
        if(i%2==0)//��i��ż��ʱ
        sum1+=i;//�ӵ�sum1��
        else//Ϊ����ʱ
            sum2+=i;//�ӵ�sum2��

    }
    printf("ż��֮��Ϊ��%d",sum1);
    printf("����֮��Ϊ��%d",sum2);
    return 0;
}
