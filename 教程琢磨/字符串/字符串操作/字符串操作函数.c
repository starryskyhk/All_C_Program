#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main01()
{
	char a[100] ="58jih ikok.";

	int len = strlen(a);//strlen �������Եõ��ַ������ȣ�����������'\0'��
	printf("%d", len);
	return 0;
}

/*�ַ���׷��*/
int main02()
{
	char a[10] = "abc";
	char b[100] = "de56325282d";
	//strcat(a, b);//����һ������ӵ�ǰ�������Ҳ����������⣩
	strncat(a,b, sizeof(a) - sizeof(b) - 1);//��ȫ�÷���
	//a[sizeof(a) - 1] = 0;//���һ��Ϊ0����Ϊ��ֹ
	printf("%s", a);
}
int main()
{
	char a[100] = "20";
	char b[100] = "200";
	if (strcmp(a, b) == 0)//��a��b���ʱ��ֵΪ0
		printf("llll");
	if (strncmp(a, b, 2) == 0)//ֻ�Ƚ�a,b��ǰ����
		printf("klll");

	return 0;

}
