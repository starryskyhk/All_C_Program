#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	time_t tm = time(NULL);//调出当前系统时间
	srand(tm);//随机数种子发生器
	int i;
	for (i = 0; i < 10; i++)
	{
		int m = rand();//rand为伪随机数产生器，每次调用产生的值都一样
		printf("%d\n", m);
	}
	getchar();
	return 0;

}