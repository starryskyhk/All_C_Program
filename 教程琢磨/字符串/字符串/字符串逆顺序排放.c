#include<stdio.h>
int main02()
{
	char a[] = "hello world";
	int i = 0, j = sizeof(a)-2;//sizeof(a)-2Ϊ�������һ���ַ����±�
	while (i < j)//��i<jʱ��ѭ��
	{
		char t = a[j];
		a[j] = a[i];
		a[i] = t;//����
		i++, j--;//һ���Լӣ�һ���Լ�
	}
	printf("%s\n", a);//����ı����ַ���
	getchar();
}