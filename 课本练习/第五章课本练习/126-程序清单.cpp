#include<stdio.h>
#include<stdlib.h>
int main()
{
 char chars;
 unsigned a,b,c,d;
 a=0,b=0,c=0,d=0;
 printf("������һ���ַ�����#������\n");
 while((chars=getchar())!='#')//��������ַ�����#ʱ����ѭ��
 {
     if(chars>='A'&&chars<='Z'||chars>='a'&&chars<='z')//�ж��ַ��Ƿ�Ϊ��ĸ
        a++;//����ǣ�a��1
     else if(chars>='0'&&chars<='9')//���Ϊ���ֵĻ�
       b++;//b��1
     else//�������Ϊ����
        d++;//d��1
     c++;//�����ܹ�������ַ�
 }
 printf("�����У�%d",b);
  printf("��ĸ�У�%d",a);
   printf("�����У�%d",d);
    printf("���ַ��У�%d",c);
    return 0;
} 