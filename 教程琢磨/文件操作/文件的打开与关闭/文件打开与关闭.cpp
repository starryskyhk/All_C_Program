#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p;//定义指向文件的指针
    char file_name[20];//定义文件名数组
    char file_context[100];//定义文件内容数组
    printf("Enter file name:");
    gets(file_name);//为文件命名
    p=fopen(file_name,"w");//以只写的方式打开文件file_name
    if(p==NULL)//如果为空
    {
        printf("%s can't open",file_name);//则显示不能打开
        exit(EXIT_FAILURE);
    }
    printf("Enter file context:");
    gets(file_context);//输入文件内容
    fputs(file_context,p);//将字符串写入文件
    fclose(p);//释放文件
    return 0;

}
