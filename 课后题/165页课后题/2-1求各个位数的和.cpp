#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum,n1;
    sum=0;
    do{
        printf("������һ����������");
        scanf("%d",&n);
    }while(n<0);//�������룬�����������0
    for(i=0;;i++)//ѭ��������Ϊ����ѭ��
    {
        n1=n%10;//�������ȡ��
        n/=10;//��10ȡ��  
        sum+=n1;//�����õ���ÿλ�����
		if(n==0)//���n����0�ˣ������ѭ��
			break;
    }
    printf("%d\n",sum);
    return 0;

}
