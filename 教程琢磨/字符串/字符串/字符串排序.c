#include<stdio.h>
int main01()
{
	int i, j;
	char a[] = "hello world";//����һ�����飬����ַ���
	for (i = 0; i<sizeof(a) - 1; i++)//ѭ����sizeof(a)Ϊ����ַ�����ռ�ֽ���
	{
		for (j = 1; j<sizeof(a) - 1 - i; j++)
			if (a[j - 1]>a[j])//ֻҪǰһ�����ں�һ�����ͽ��н���
			{
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;//����
			}
	}
	printf("%s", a);//�����������ַ���

}
