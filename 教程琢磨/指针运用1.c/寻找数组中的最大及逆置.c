#include<stdio.h>
void nishun(int *p)
{
	int i;
	int *p1;
	p1 = p + 9;//�����ָ�����p1ָ���������ĩβ
	for (i = 10; i > 0; i--)

		printf("%5d\n", *p1--);//��˳�����
}
void zuida(int *p)
{
	int i;
	int max = *p;//�����ֵ�ĳ�ֵΪ��������һ��Ԫ��
	for (i = 1; i < 10; i++)
		if (max< *(p + i))//����������С�ں����
			max = *(p + i);//�����ֵΪ�������
	printf("%d", max);
}


int main()
{
	int a[10], i;
	printf("������ʮ������");
	int *p;
	p = a;
	for (i = 0; i < 10; i++)
		scanf("%d", p++);
	nishun(a);
	zuida(a);
}
