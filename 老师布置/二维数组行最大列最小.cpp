#include<stdio.h>
int main()
{
	int i, j, max, m, n, min, c,l=0;
	int k;
	do {
		printf("输入数组的行和列(用逗号隔开):");
		scanf("%d,%d", &m, &n);
	} while (m<1 || n<1);//让用户输入数组的行和列，并对其输入进行限制
	int a[m][n];//定义一个二维数组
	for (i = 0; i<m; i++)
	{
		printf("请输入第%d行的%d个数:", i + 1, n);
		for (j = 0; j<n; j++)
			scanf("%d", &a[i][j]);
	}//让用户输入二维数组的元素
	printf("矩阵为:\n");
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}//对其矩阵进行输出
	for (i = 0; i<m; i++)
	{
		max = a[i][0];//让行最大max为这一行的第一个元素
		for (j = 1; j<n; j++)
			if (max <= a[i][j])
			{
				max = a[i][j];//遍历这一行，如果有元素比max大，则将这个元素赋给max
				k = j;//将此时的列数j赋给k
				min = max;//将最大值赋给min
			}
		for (c = 0; c<m; c++)
			if (min>a[c][k])
			{
				min = a[c][k];//遍历最大值所在的这一列，

			}
		if (min == max)//如果此时max=min，则说明这行的行最大在这一列是最小的
			printf("%d在第%d行上最大,并且在第%d列上最小\n", max, i+1, k + 1),l++;

	}
if(l==0)
    printf("不存在这样的数");
}



























