/*#include<stdio.h>
int main()
{
    int m,n,i;
   do{
            printf("��������������������С���");
    scanf("%d,%d",&m,&n);
   }while(m*n<=0||m>n);
   for(i=m;i>0;i--)//���û������Сֵ��ʼ�ݼ�
   {
       if(m%i==0&&n%i==0)//�����������������i��Ϊʱ��
        {
            printf("%d",i);//��ʱiΪ���Լ��
       break;}//Ȼ���˳�
   }
}*/




#include<stdio.h>
void yue(int m,int n,int i)
 {
     if(m%i==0&&n%i==0)
        printf("%d",i);//��m,n��i����0ʱ,
     else
        yue(m,n,i-1);//Ҫ��Ȼ,����m,n,i-1
 }








 int main()
 {
     int m,n,i;
   do{
            printf("��������������������С���");
    scanf("%d,%d",&m,&n);
   }while(m*n<=0||m>n);
yue(m,n,m);//���صĵ�����mΪ�����е�I,����Ϊ�˷�ֹ�ݹ�ʱ�ı�m��ֵ
return 0;
 }







