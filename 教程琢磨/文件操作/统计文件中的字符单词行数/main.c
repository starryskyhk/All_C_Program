#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char file_name[20],ch;//定义个字符数组
    int num=1,num1=1,num2=0;//定义三个计数器
    printf("输入文件名：");
    gets(file_name);//让用户输入文件名
    if((fp=fopen(file_name,"r"))==NULL)//如果文件不存在
    {        printf("文件打开失败");//则打开失败
        exit(0);
    }
      while((ch=getc(fp))!=EOF)//循环到文件结尾
    {
        num++;//统计字符数量
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
            num1++;//统计单词数量
            if(ch=='\n')
                num2++;//统计行数
    }
    printf("字符个数为：%d,单词数量为：%d,共有%d行",num-1,num1-1,num2);//显示结果
    fclose(fp);//关闭文件
}

