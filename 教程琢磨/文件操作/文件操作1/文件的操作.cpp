/*文件操作*/
int main()
{
    FILE *p=fopen("E:\\CodeBlocks.exe","w" );//以写的方式打开一个文件
    //“w”如果文件不存在，则建立一个，如果存在，则覆盖
   // fputs("hellow akklam",p);//向文件中写入一个字符串
   char s[1024]={0};
   while(1)
   {

       scanf("%s",s);
       if(strcmp(s,"exit")==0)//当输入exit时结束
        break;
       int len=strlen(s);
       s[len]='\n';换行
       fputs(s,p);//将字符串写入文件
   }
    fclose(p);//关闭文件
}