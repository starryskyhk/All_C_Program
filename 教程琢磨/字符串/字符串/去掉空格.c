/*去掉所有的空格*/
#include<stdio.h>
int main05()
{
	char a[100] = "  66   jjjj555    555  ";
	int i = sizeof(a) - 2;
	for (int j = 0; j < i; j++)
	{
		printf("%c", a[j]);
		if (a[j] == 32)
			printf("\b");

	}
	printf("\n");
	return 0;

}
/*去掉右边的空格*/
int main06()
{
	char a[100] = "dkskadkk    ksdcjn   ";
	int i = sizeof(a) - 2;
	for (i; i >= 0; i--)
	{
		if (a[i] != ' ')
		{
			a[i + 1] = 0;
			break;
		}

	}
	printf("%s\n", a);
	return 0;
}
/*去掉左边空格*/
int main07()
{
	int k;
	char a[100] = "  add ";
	int i = sizeof(a) - 2;
	while (a[0] == ' ')
		for (k = 0; k <=i; k++)
			a[k] = a[k + 1];
	printf("%s\n", a);
	return 0;
}