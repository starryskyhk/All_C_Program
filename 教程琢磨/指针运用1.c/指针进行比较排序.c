#include<stdio.h>
void paixu(int *s)//定义一个指向整形的指针变量int
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10 - i; j++)//循环做的次数
		{
			if (*(s + j) <*(s + j - 1))//如果后一项比前一项小，则交换
			{
				int t = *(s + j);
				*(s + j) = *(s + j - 1);
				*(s + j - 1) = t;
			}
		}
	}
}
void print(int *s)
{
	int i;
	for (i = 0; i < 10; i++)
		printf("%d\n", *(s + i));//打印输出排序后的数组
}



int main02()
{
	int char1[10] = { 51,87,25,30,45,87,0,54,954,4 };//定义一个数组，里面有十个数
	paixu(char1);//调用排序函数
	print(char1);//调用输出函数
	return 0;
}