#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int y;
    int z;
    double x;
	printf("һ�������ۼ�6.75Ԫ/��,���������ۼ�5.25Ԫ/��,���������ۼ�4.85Ԫ/��\n");//���û�����ÿ���еļ۸�
    printf("��ѡ�����ͱ��  1:(type1)2:(type2)3:(type3)\n");
 
    scanf("%d",&y);//���û�����
    if(!(y==1||y==2||y==3))//�ж��û�������Ƿ�Ϊ���ṩ��1,2,3
       {

        printf("�������!\n");//����������ʾ������󲢽�������
        exit(0);}
   else//����,�������һ��
    {printf("��ѡ���������  1:(������)2:(Э����)\n");
    printf("�����ӿ��Ż�5%%,Э�����Ż�10%%\n");
    scanf("%d",&z);}
    if(!(z==1||z==2))//ͬ��
        {printf("�������!");
    exit(0);}
    else
    {printf("��������Ҫ�Ӷ�������:");
    scanf("%lf",&x);}
   switch(y)
   {
   case 1://�������yΪ1ʱ
    if(z==1)//����z����1ʱ,��������
        printf("Ӧ��֧��%f",6.75*x*(1-0.05));
    else if(z==2)//�����yΪ1����zΪ2ʱ
        printf("Ӧ��֧��%f",6.75*x*(1-0.1));

     break;
   case 2:
     if(z==1)//ͬ��
        printf("Ӧ��֧��%f",5.25*x*(1-0.05));
    else if(z==2)
        printf("Ӧ��֧��%f",5.25*x*(1-0.1));

    break;
   case 3:
    if(z==1)
        printf("Ӧ��֧��%f",4.85*x*(1-0.05));
    else if(z==2)
        printf("Ӧ��֧��%f",4.85*x*(1-0.1));

    break;
   default:
    printf("�������!\n");

   }

}
