#include<stdio.h>
int main()
{
	int i, j, max, m, n, min, c,l=0;
	int k;
	do {
		printf("����������к���(�ö��Ÿ���):");
		scanf("%d,%d", &m, &n);
	} while (m<1 || n<1);//���û�����������к��У������������������
	int a[m][n];//����һ����ά����
	for (i = 0; i<m; i++)
	{
		printf("�������%d�е�%d����:", i + 1, n);
		for (j = 0; j<n; j++)
			scanf("%d", &a[i][j]);
	}//���û������ά�����Ԫ��
	printf("����Ϊ:\n");
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}//�������������
	for (i = 0; i<m; i++)
	{
		max = a[i][0];//�������maxΪ��һ�еĵ�һ��Ԫ��
		for (j = 1; j<n; j++)
			if (max <= a[i][j])
			{
				max = a[i][j];//������һ�У������Ԫ�ر�max�������Ԫ�ظ���max
				k = j;//����ʱ������j����k
				min = max;//�����ֵ����min
			}
		for (c = 0; c<m; c++)
			if (min>a[c][k])
			{
				min = a[c][k];//�������ֵ���ڵ���һ�У�

			}
		if (min == max)//�����ʱmax=min����˵�����е����������һ������С��
			printf("%d�ڵ�%d�������,�����ڵ�%d������С\n", max, i+1, k + 1),l++;

	}
if(l==0)
    printf("��������������");
}



























