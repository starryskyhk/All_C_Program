#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p;//����ָ���ļ���ָ��
    char file_name[20];//�����ļ�������
    char file_context[100];//�����ļ���������
    printf("Enter file name:");
    gets(file_name);//Ϊ�ļ�����
    p=fopen(file_name,"w");//��ֻд�ķ�ʽ���ļ�file_name
    if(p==NULL)//���Ϊ��
    {
        printf("%s can't open",file_name);//����ʾ���ܴ�
        exit(EXIT_FAILURE);
    }
    printf("Enter file context:");
    gets(file_context);//�����ļ�����
    fputs(file_context,p);//���ַ���д���ļ�
    fclose(p);//�ͷ��ļ�
    return 0;

}
