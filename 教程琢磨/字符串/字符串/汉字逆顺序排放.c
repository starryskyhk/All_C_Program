#include<stdio.h>
int main03()
{
	char a[] = "你好，我喜欢你";//定义一个数字，里面存放汉字，因为字符占一个字节，而汉字使用国标码，占用两个字节
	int d = sizeof(a) - 2;//定义为数组最后一个元素下标
	int min = 1,max = d;//从第二个开始
	while (min < max)//循环
	{
		int t = a[min - 1];
		a[min - 1] = a[max - 1];
		a[max - 1] = t;//进行第一次交换
		/*因为每个汉字占2个字节，所以交换的话要保证不破坏每个汉字的字节顺序*/
		int m = a[min];
		a[min] = a[max];
		a[max] = m;//进行第二次交换
		min += 2;
		max -= 2;//分别自加/自减2
	}
	printf("%s", a);
	getchar();

}