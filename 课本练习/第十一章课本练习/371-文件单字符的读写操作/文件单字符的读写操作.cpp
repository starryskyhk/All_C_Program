#include<stdio.h>
#include<stdlib.h>
/*单字符的读操作*/
int main01()
{
        FILE *p;
        char ch,file_name[20];
        printf("input open file name:");
        gets(file_name);
        if((p=fopen(file_name,"r"))==NULL)//如果这个文件是空，则打开失败
        {            printf("file open error!\n");
            exit(EXIT_FAILURE);


        }

    while((ch=getc(p))!=EOF)//无限循环的条件，当等于EOF时退出    ps:gets函数在读取文件字符时，如果遇到文件的结尾的字符，则返回特殊值EOF
        putchar(ch);//输出
    printf("\n");
    fclose(p);//释放文件
    return 0;
}

/*单字符的写操作*/
int main02()
{
    FILE *fp;
    char file_name[20],file_context[100];
    char *p=file_context;//定义一个指针，指向文件内容的数组首地址
    printf("input a string:");
    gets(file_context);//输入文件内容
    printf("input a file name:");
    gets(file_name);//输入文件名称
    if((fp=fopen(file_name,"w"))==NULL)//以只写的方式打开文件，如果不存在，则返回空值
    {
        printf("file open error!\n");
        exit(EXIT_FAILURE);
    }
    while(*p!='\0')
    {
        putc(*p,fp);//给文件p输入字符，
        p++;//每输入一个，数组地址向后移动一位
    }
    fclose(fp);//释放文件
    return 0;
}
/*单字符的读写综合操作*/
int main()
{

    FILE *fp;
    char file_context[100],file_name[20],ch;
    char *p=file_context;//定义一个指针，指向文件内容的数组首地址
    unsigned dig_num=0,char_num=0,other_num=0;//初始化三个计数器
    printf("input a string:");
    gets(file_context);//输入文件内容
    printf("input a name:");
    gets(file_name);//输入文件名字
    if((fp=fopen(file_name,"w"))==NULL)
    {
        printf("file open error!\n");
        exit(EXIT_FAILURE);//如果没有，则打开失败
    }
while(*p!='\0')
{
    putc(*p,fp);
    p++;
}
fclose(fp);//释放文件

if((fp=fopen(file_name,"r"))==NULL)//再打开文件（以只读形式打开），如果为空，则打开失败
   {
     printf("file open error!\n");
        exit(EXIT_FAILURE);
   }
    while((ch=getc(fp))!=EOF)//循环到文件的最后一个字符
        {
            if(ch>='0'&&ch<='9')
                dig_num++;//数字计数器加1
                else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
                    char_num++;//字母计数器加1
                    else
                        other_num++;//其他的加1


        }
        fclose(fp);//释放文件
        printf("数字有%d个，字母有%d个，其他有%d个\n",dig_num,char_num,other_num);
}
