#include<stdio.h>
int main()
{
    int i,j,m,n;
    do{
        printf("���������к��У�");
        scanf("%d,%d",&m,&n);
    }while(m<0||n<0);//���û����������к���
    int a[m][n],b[n][m];//����������λ���飬һ��Ϊת��ǰ��һ��Ϊת����
    for(i=0;i<m;i++)
    {
        printf("�����%d�е�%d����",i+1,n);//���û�������ʾ
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);//���û�������һ�е�n��ֵ
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        b[i][j]=a[j][i];//�����û���

     printf("ԭʼ����Ϊ��\n");//���ԭʼ����
     for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
        printf("%5d",a[i][j]);//�����i+1�е���
     printf("\n");}//Ȼ����
     printf("ת����Ϊ:\n");
     for(i=0;i<n;i++)
        {for(j=0;j<m;j++)
        printf("%5d",b[i][j]);
     printf("\n");}
}
