#include<stdio.h>
int main()
{
    int i,j,m,n;
    do{
        printf("输入矩阵的行和列：");
        scanf("%d,%d",&m,&n);
    }while(m<0||n<0);//让用户输入矩阵的行和列
    int a[m][n],b[n][m];//定义两个二位数组，一个为转换前，一个为转换后
    for(i=0;i<m;i++)
    {
        printf("输入第%d行的%d个数",i+1,n);//给用户给予提示
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);//让用户输入这一行的n个值
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        b[i][j]=a[j][i];//进行置换；

     printf("原始矩阵为：\n");//输出原始矩阵
     for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
        printf("%5d",a[i][j]);//输出第i+1行的数
     printf("\n");}//然后换行
     printf("转换后为:\n");
     for(i=0;i<n;i++)
        {for(j=0;j<m;j++)
        printf("%5d",b[i][j]);
     printf("\n");}
}
