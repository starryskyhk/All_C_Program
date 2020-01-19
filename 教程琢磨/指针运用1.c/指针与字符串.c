#include<stdio.h>
int main01()
{
	char ch1[100] = "hello";
	char ch2[100] = "world";
	char *p1, *p2;
	int k = 0;
	p1 = ch1;
	while (*p1)//当*p1为0的时候
	{
		p1++;//让这个地址向前一个
		k++;//然后计数加一
	}
	printf("k=%d\n", k);
	p2 = ch2;//将字符串ch2的首地址付给指针p2
	while (*p2)
	{
		*p1 = *p2;//从p1末尾，p2开头开始，将*p2的值给*p1
		p1++;
		p2++;//p1和p2的地址都向后加一
	}
	printf("ch1=%s\nch2=%s", ch1, ch2);//输出ch1这个字符串，显示hello world ，合并成功
	return 0;
}