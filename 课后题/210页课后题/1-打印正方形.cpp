#include<stdio.h>
#include<stdlib.h>
int main()
{
    int tuan(char ,int );
        char ch;int size;
        printf("���������������ͼ���Լ����������εı߳���");
        scanf("%c,%d",&ch,&size);
         tuan(ch,size);
        }
        int tuan(char ch,int size)
        {
           int i,k;

      for(i=1;i<=size;i++)
        {
            for(k=1;k<=size;k++)
        printf("%c ",ch);

    printf("\n");}
    return ch;

        }

