#include<stdio.h>
int main04()
{
	char a[] = "jj;�Ұ�����";//�����ַ�С��0
	int len = 0, i = 0;
	while (a[i])
	{
		if (a[i] < 0)
			i++;//���С��0����Ϊ���֣�������һ��
		i++;//i��1
		len++;//�ַ�����1

	}
	printf("%d\n", len);//����ַ������ַ�����
	//getchar();
	return 0;
}
