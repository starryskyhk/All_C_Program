#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	time_t tm = time(NULL);//������ǰϵͳʱ��
	srand(tm);//��������ӷ�����
	int i;
	for (i = 0; i < 10; i++)
	{
		int m = rand();//randΪα�������������ÿ�ε��ò�����ֵ��һ��
		printf("%d\n", m);
	}
	getchar();
	return 0;

}