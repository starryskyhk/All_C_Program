#include<stdio.h>
void paixu(int *s)//����һ��ָ�����ε�ָ�����int
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10 - i; j++)//ѭ�����Ĵ���
		{
			if (*(s + j) <*(s + j - 1))//�����һ���ǰһ��С���򽻻�
			{
				int t = *(s + j);
				*(s + j) = *(s + j - 1);
				*(s + j - 1) = t;
			}
		}
	}
}
void print(int *s)
{
	int i;
	for (i = 0; i < 10; i++)
		printf("%d\n", *(s + i));//��ӡ�������������
}



int main02()
{
	int char1[10] = { 51,87,25,30,45,87,0,54,954,4 };//����һ�����飬������ʮ����
	paixu(char1);//����������
	print(char1);//�����������
	return 0;
}