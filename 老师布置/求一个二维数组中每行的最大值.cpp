/*#include<stdio.h>
int main()
{
    int i,j,max;
    int a[3][4];
    for(i=0;i<3;i++)
    {
        printf("请输入第%d行的4个数:",i);
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
    printf("矩阵为:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            printf("%5d",a[i][j]);
            printf("\n");
    }
    for(i=0;i<3;i++)
    {
        max=a[i][0];
        for(j=0;j<3;j++)
        {
            if(max<a[i][j+1])
                max=a[i][j+1];
        }
        printf("第%d行的最大值为:%d\n",i,max);

    }
}*/

















#include<stdio.h>
int main()
{
    int i,j,max,m,n;
    do{
        printf("输入数组的行和列(用逗号隔开):");
        scanf("%d,%d",&m,&n);
    }while(m<1||n<1);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        printf("请输入第%d行的%d个数:",i,n);
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("矩阵为:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%5d",a[i][j]);
            printf("\n");
    }
    for(i=0;i<m;i++)
    {
        max=a[i][0];
        for(j=0;j<n-1;j++)
        {
            if(max<a[i][j+1])
                max=a[i][j+1];
        }
        printf("第%d行的最大值为:%d\n",i,max);

    }
}

