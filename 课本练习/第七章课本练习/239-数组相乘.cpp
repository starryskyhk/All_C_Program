#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,m,n,l;
    do{
        printf("输入a矩阵的行和列：");
        scanf("%d%d",&m,&n);
    }while(m<1||n<1);//输入a矩阵的行和列
    do{
        printf("输入b矩阵的列数：");
        scanf("%d",&l);
    }while(l<1);//输入b矩阵的列数,b矩阵的行数为a矩阵的列数
    int a[m][n],b[n][l];//定义这两个数组
    for(i=0;i<m;i++)
    {
        printf("输入a矩阵第%d行的%d个值:\n",i+1,n);
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }//对a矩阵进行赋值
    for(i=0;i<n;i++)
    {
        printf("输入b矩阵第%d行的%d个值:\n",i+1,l);
          for(j=0;j<l;j++)
        scanf("%d",&b[i][j]);
    }//对b矩阵进行赋值
    int c[m][l];//定义相乘后的数组c,行数为a数组行数,列数为b数组列数
    for(i=0;i<m;i++)
        for(j=0;j<l;j++)
    {
        c[i][j]=0;//每次循环开始初始化c数组此行此列为0,然后在后面才能累加
        for(k=0;k<n;k++)
            c[i][j]+=a[i][k]*b[k][j];//把a,b数组相乘,将和赋给c数组,将这些和相加(相乘的话则为a数组第一行的数和b数组的每一列数分别相乘)
    }
    printf("矩阵相乘结果为：\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
            printf("%10d",c[i][j]);
        printf("\n");
    }//输出相乘的结果
return 0;

}
