#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char file_name[20],ch;//������ַ�����
    int num=1,num1=1,num2=0;//��������������
    printf("�����ļ�����");
    gets(file_name);//���û������ļ���
    if((fp=fopen(file_name,"r"))==NULL)//����ļ�������
    {        printf("�ļ���ʧ��");//���ʧ��
        exit(0);
    }
      while((ch=getc(fp))!=EOF)//ѭ�����ļ���β
    {
        num++;//ͳ���ַ�����
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
            num1++;//ͳ�Ƶ�������
            if(ch=='\n')
                num2++;//ͳ������
    }
    printf("�ַ�����Ϊ��%d,��������Ϊ��%d,����%d��",num-1,num1-1,num2);//��ʾ���
    fclose(fp);//�ر��ļ�
}

