#include<stdio.h>
int main01()
{
	char ch1[100] = "hello";
	char ch2[100] = "world";
	char *p1, *p2;
	int k = 0;
	p1 = ch1;
	while (*p1)//��*p1Ϊ0��ʱ��
	{
		p1++;//�������ַ��ǰһ��
		k++;//Ȼ�������һ
	}
	printf("k=%d\n", k);
	p2 = ch2;//���ַ���ch2���׵�ַ����ָ��p2
	while (*p2)
	{
		*p1 = *p2;//��p1ĩβ��p2��ͷ��ʼ����*p2��ֵ��*p1
		p1++;
		p2++;//p1��p2�ĵ�ַ������һ
	}
	printf("ch1=%s\nch2=%s", ch1, ch2);//���ch1����ַ�������ʾhello world ���ϲ��ɹ�
	return 0;
}