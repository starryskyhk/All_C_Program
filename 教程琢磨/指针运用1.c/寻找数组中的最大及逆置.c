#include<stdio.h>
void nishun(int *p)
{
	int i;
	int *p1;
	p1 = p + 9;//定义的指针变量p1指向这个数组末尾
	for (i = 10; i > 0; i--)

		printf("%5d\n", *p1--);//逆顺序输出
}
void zuida(int *p)
{
	int i;
	int max = *p;//另最大值的初值为这个数组第一个元素
	for (i = 1; i < 10; i++)
		if (max< *(p + i))//如果这个数字小于后面的
			max = *(p + i);//则最大值为后面的数
	printf("%d", max);
}


int main()
{
	int a[10], i;
	printf("请输入十个数：");
	int *p;
	p = a;
	for (i = 0; i < 10; i++)
		scanf("%d", p++);
	nishun(a);
	zuida(a);
}
