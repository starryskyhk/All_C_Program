#include<stdio.h>
int main02()
{
	char a[] = "hello world";
	int i = 0, j = sizeof(a)-2;//sizeof(a)-2为数组最后一个字符的下标
	while (i < j)//当i<j时，循环
	{
		char t = a[j];
		a[j] = a[i];
		a[i] = t;//交换
		i++, j--;//一个自加，一个自减
	}
	printf("%s\n", a);//输出改变后的字符串
	getchar();
}