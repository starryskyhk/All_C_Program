#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("color 5A");

    int up,low;
    int i;
    do
    {
        printf("请输入整数的范围:");
        scanf("%d %d",&low,&up);

    }while(up<0||low<0||low>up);
    printf("%20s%20s%20s\n","n","n_squre","n_cube");
    for( i=low;i<=up;i++)
        printf("%20d%20d%20d\n",i,i*i,i*i*i);
    return 0;
}
