#include<stdio.h>
int main()
{
    int a[10]={1,7,54,-9,94,74,581,441,84,47};
    int max,i,min;
	int  b,c;
    max=a[0];//�Ƚ���һ��������max��
	min=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)//�Ƚ��������ǰһ������С������������ǰһ����
		{
			max=a[i];//���ֵ����max
			b=i;//�ҵ���������Ӧ�ĽǱ�
		}
		else if(a[i]<min)
		{
			min=a[i];
           c=i;
		}
    }
	
    printf("%d,%d,%d,%f\n",max,min,b,c);
    return 0;
}
