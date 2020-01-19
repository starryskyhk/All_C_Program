#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main01()
{
	char a[100] ="58jih ikok.";

	int len = strlen(a);//strlen 函数可以得到字符串长度（不包含最后的'\0'）
	printf("%d", len);
	return 0;
}

/*字符串追加*/
int main02()
{
	char a[10] = "abc";
	char b[100] = "de56325282d";
	//strcat(a, b);//将后一个数组加到前面数组里（也存在溢出问题）
	strncat(a,b, sizeof(a) - sizeof(b) - 1);//安全用法，
	//a[sizeof(a) - 1] = 0;//最后一个为0，作为终止
	printf("%s", a);
}
int main()
{
	char a[100] = "20";
	char b[100] = "200";
	if (strcmp(a, b) == 0)//当a与b相等时，值为0
		printf("llll");
	if (strncmp(a, b, 2) == 0)//只比较a,b的前两项
		printf("klll");

	return 0;

}
