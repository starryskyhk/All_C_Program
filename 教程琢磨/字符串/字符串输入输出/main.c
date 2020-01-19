#include<stdio.h>
#include<stdlib.h>
int main01()
{
	char a[100] = { 0 };
	gets(a);//gets与scanf都存在缓冲区溢出的问题
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
	//fgets(a, 10, stdin);      //第一个是数组名，第二个是数组大小，第三个代表标准函数
	fgets(a, sizeof(a), stdin);

	printf("%s", a);//fgets安全，超出大小就不再处理
	puts(a);//自动会打印'\n'
}