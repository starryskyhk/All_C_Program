#include<stdio.h>
#include<stdlib.h>
int main01()
{
	char a[100] = { 0 };
	gets(a);//gets��scanf�����ڻ��������������
	printf("kkk");
	puts(a);
	return 0;


}
int main02()
{
	char a[10];
	char b[10];
	gets(a);
	gets(b);
	int i1 = atoi(a);
	int i2 = atoi(b);
	printf("%d", i1 + i2);
}


int main()
{
	char a[10] = { 0 };
	//fgets(a, 10, stdin);      //��һ�������������ڶ����������С�������������׼����
	fgets(a, sizeof(a), stdin);

	printf("%s", a);//fgets��ȫ��������С�Ͳ��ٴ���
	puts(a);//�Զ����ӡ'\n'
}