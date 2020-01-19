#include<stdio.h>
int main04()
{
	char a[] = "jj;我爱那你";//汉字字符小于0
	int len = 0, i = 0;
	while (a[i])
	{
		if (a[i] < 0)
			i++;//如果小于0，即为汉字，则跳过一个
		i++;//i加1
		len++;//字符数加1

	}
	printf("%d\n", len);//输出字符串的字符个数
	//getchar();
	return 0;
}
