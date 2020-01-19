#include<stdio.h>
int main01()
{
	int i, j;
	char a[] = "hello world";//定义一个数组，存放字符串
	for (i = 0; i<sizeof(a) - 1; i++)//循环，sizeof(a)为这个字符串所占字节数
	{
		for (j = 1; j<sizeof(a) - 1 - i; j++)
			if (a[j - 1]>a[j])//只要前一个大于后一个，就进行交换
			{
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;//交换
			}
	}
	printf("%s", a);//输出交换后的字符串

}
