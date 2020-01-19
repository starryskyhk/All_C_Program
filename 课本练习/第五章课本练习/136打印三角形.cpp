#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row;
    do{
        printf("三角形图案的行数(>1):");
        scanf("%d",&row);

    }while(row<1);
    for(int i=1;i<=row;i++)//控制三角形有几行
    {
        for(int j=1;j<=row;j++)//控制每行前有多少空格
            printf(" ");
        for(int k=1;k<=2*i-1;k++)//用数列控制每一行有多少*
            printf("*");//输出*
        printf("\n");//换行

    }
    return 0;

}
