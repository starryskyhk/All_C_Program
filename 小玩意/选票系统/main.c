#include<stdio.h>
#include<stdlib.h>
struct xuanpiao
{
    char name[20];
    int num;//����һ���ṹ�壬��ԱΪ������һ����
};
int main()
{
    int i,n;
int max=stu[0].num;//����һ�����ֵ����ֵΪ��һ��ѧ����Ʊ��
		  int  j=0;
    struct xuanpiao stu[3]={{"����",0},{"����",0},{"����",0}};//��������ṹ��Ϊ���飬��������г�ʼ��
    printf("֧��˭�ͻظ���Ӧ�����:\n1:����   2:����   3:����\n");//�����û���ʾ
    for(i=1;i<=5;i++)
    {
        h:scanf("%d",&n);//���û���������
        if(n==1)
            stu[0].num++;
        else if(n==2)
             stu[1].num++;
        else if(n==3)
             stu[2].num++;//���������Ӧ������������Ӧ�ļ�������1
        else
        {
            printf("����������������룺");
            goto h;//���������򷵻�
        }
    }
    printf("%15s%15s%15s\n","����","����","����");
    printf("%15d%15d%15d",stu[0].num++,stu[1].num++,stu[2].num++);//��ʾ��ÿ���˵ĵ�Ʊ��
//	int max=stu[0].num;//����һ�����ֵ����ֵΪ��һ��ѧ����Ʊ��
		  //int  j=0;
	for(i=1;i<3;i++)
	{
	if(max<stu[i].num)
		max=stu[i].num,j=i;//��������ͬѧƱ�����ڴ�ͬѧ���򽫺�������ֵ����max���������±긶��j

	}
    printf("\n���ջ�ѡ��Ϊ��%s",stu[j].name);//������ջ�ѡ��
    return 0;
}
