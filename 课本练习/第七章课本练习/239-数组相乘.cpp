#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,m,n,l;
    do{
        printf("����a������к��У�");
        scanf("%d%d",&m,&n);
    }while(m<1||n<1);//����a������к���
    do{
        printf("����b�����������");
        scanf("%d",&l);
    }while(l<1);//����b���������,b���������Ϊa���������
    int a[m][n],b[n][l];//��������������
    for(i=0;i<m;i++)
    {
        printf("����a�����%d�е�%d��ֵ:\n",i+1,n);
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }//��a������и�ֵ
    for(i=0;i<n;i++)
    {
        printf("����b�����%d�е�%d��ֵ:\n",i+1,l);
          for(j=0;j<l;j++)
        scanf("%d",&b[i][j]);
    }//��b������и�ֵ
    int c[m][l];//������˺������c,����Ϊa��������,����Ϊb��������
    for(i=0;i<m;i++)
        for(j=0;j<l;j++)
    {
        c[i][j]=0;//ÿ��ѭ����ʼ��ʼ��c������д���Ϊ0,Ȼ���ں�������ۼ�
        for(k=0;k<n;k++)
            c[i][j]+=a[i][k]*b[k][j];//��a,b�������,���͸���c����,����Щ�����(��˵Ļ���Ϊa�����һ�е�����b�����ÿһ�����ֱ����)
    }
    printf("������˽��Ϊ��\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
            printf("%10d",c[i][j]);
        printf("\n");
    }//�����˵Ľ��
return 0;

}
