#include<stdio.h>
int main()
{
    int a[10]={1,7,54,-9,94,74,581,441,84,47};
    int max,i,min;
	int  b,c;
    max=a[0];//先将第一个数赋给max；
	min=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)//比较这个数和前一个数大小，如果这个数比前一个大
		{
			max=a[i];//则把值赋给max
			b=i;//找到最大数组对应的角标
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
