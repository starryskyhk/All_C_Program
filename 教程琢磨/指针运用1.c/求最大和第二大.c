#include<stdio.h>
int main04()
{
	int a[5] = { 8,2,56,7,5 };
	int max, s_max;

	max = a[0];
	s_max = a[1];
	for (int i = 2; i < 5; i++)
	{
		if (a[i] > max)
		{
			s_max = max;
			max = a[i];
		}
		if (a[i]<max&&a[i]>s_max)
			s_max = a[i];
			


	}
	printf("%d   %d", max, s_max);
	return 0;
}