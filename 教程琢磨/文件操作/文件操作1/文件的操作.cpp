/*�ļ�����*/
int main()
{
    FILE *p=fopen("E:\\CodeBlocks.exe","w" );//��д�ķ�ʽ��һ���ļ�
    //��w������ļ������ڣ�����һ����������ڣ��򸲸�
   // fputs("hellow akklam",p);//���ļ���д��һ���ַ���
   char s[1024]={0};
   while(1)
   {

       scanf("%s",s);
       if(strcmp(s,"exit")==0)//������exitʱ����
        break;
       int len=strlen(s);
       s[len]='\n';����
       fputs(s,p);//���ַ���д���ļ�
   }
    fclose(p);//�ر��ļ�
}