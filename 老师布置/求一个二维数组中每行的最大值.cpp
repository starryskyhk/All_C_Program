/*#include<stdio.h>
int main()
{
    int i,j,max;
    int a[3][4];
    for(i=0;i<3;i++)
    {
        printf("�������%d�е�4����:",i);
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    }
    printf("����Ϊ:\n");
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
        printf("��%d�е����ֵΪ:%d\n",i,max);

    }
}*/

















#include<stdio.h>
int main()
{
    int i,j,max,m,n;
    do{
        printf("����������к���(�ö��Ÿ���):");
        scanf("%d,%d",&m,&n);
    }while(m<1||n<1);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        printf("�������%d�е�%d����:",i,n);
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("����Ϊ:\n");
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
        printf("��%d�е����ֵΪ:%d\n",i,max);

    }
}

