#include<stdio.h>
#include<stdlib.h>
/*���ַ��Ķ�����*/
int main01()
{
        FILE *p;
        char ch,file_name[20];
        printf("input open file name:");
        gets(file_name);
        if((p=fopen(file_name,"r"))==NULL)//�������ļ��ǿգ����ʧ��
        {            printf("file open error!\n");
            exit(EXIT_FAILURE);


        }

    while((ch=getc(p))!=EOF)//����ѭ����������������EOFʱ�˳�    ps:gets�����ڶ�ȡ�ļ��ַ�ʱ����������ļ��Ľ�β���ַ����򷵻�����ֵEOF
        putchar(ch);//���
    printf("\n");
    fclose(p);//�ͷ��ļ�
    return 0;
}

/*���ַ���д����*/
int main02()
{
    FILE *fp;
    char file_name[20],file_context[100];
    char *p=file_context;//����һ��ָ�룬ָ���ļ����ݵ������׵�ַ
    printf("input a string:");
    gets(file_context);//�����ļ�����
    printf("input a file name:");
    gets(file_name);//�����ļ�����
    if((fp=fopen(file_name,"w"))==NULL)//��ֻд�ķ�ʽ���ļ�����������ڣ��򷵻ؿ�ֵ
    {
        printf("file open error!\n");
        exit(EXIT_FAILURE);
    }
    while(*p!='\0')
    {
        putc(*p,fp);//���ļ�p�����ַ���
        p++;//ÿ����һ���������ַ����ƶ�һλ
    }
    fclose(fp);//�ͷ��ļ�
    return 0;
}
/*���ַ��Ķ�д�ۺϲ���*/
int main()
{

    FILE *fp;
    char file_context[100],file_name[20],ch;
    char *p=file_context;//����һ��ָ�룬ָ���ļ����ݵ������׵�ַ
    unsigned dig_num=0,char_num=0,other_num=0;//��ʼ������������
    printf("input a string:");
    gets(file_context);//�����ļ�����
    printf("input a name:");
    gets(file_name);//�����ļ�����
    if((fp=fopen(file_name,"w"))==NULL)
    {
        printf("file open error!\n");
        exit(EXIT_FAILURE);//���û�У����ʧ��
    }
while(*p!='\0')
{
    putc(*p,fp);
    p++;
}
fclose(fp);//�ͷ��ļ�

if((fp=fopen(file_name,"r"))==NULL)//�ٴ��ļ�����ֻ����ʽ�򿪣������Ϊ�գ����ʧ��
   {
     printf("file open error!\n");
        exit(EXIT_FAILURE);
   }
    while((ch=getc(fp))!=EOF)//ѭ�����ļ������һ���ַ�
        {
            if(ch>='0'&&ch<='9')
                dig_num++;//���ּ�������1
                else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
                    char_num++;//��ĸ��������1
                    else
                        other_num++;//�����ļ�1


        }
        fclose(fp);//�ͷ��ļ�
        printf("������%d������ĸ��%d����������%d��\n",dig_num,char_num,other_num);
}
