/*#include<stdio.h>
int shulie(int n)
{
    if(n==1||n==2)
        return 1;//���nΪ1��2ʱ,����1
    else
        return shulie(n-1)+shulie(n-2);//�������ݹ鷵��
}
int main()
{
    int n,i,j=0;
    printf("Ҫ�����е�ǰ������:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%15d",shulie(i));//�ӵ�һ�ʼ���,ֱ����n��
        j++;
        if(j%5==0)
            printf("\n");//����
    }
}*/









#include<stdio.h>
int main()
{
    int n,f1=1,f2=1,i;
    printf("Ҫ�����е�ǰ�����");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)//ѭ����n/2
    {
        printf("%5d%5d",f1,f2);//�����f1,f2
        f1=f1+f2;
        f2=f1+f2;//��������
    }
	if(n%2!=0)//��������n�������Ļ�
		printf("%5d",f1);//������һ��f1
}

