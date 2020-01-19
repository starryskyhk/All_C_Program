#include<stdio.h>
void main()
{

  char ch;
  ch=getchar();
switch(ch)
    {
        case'a'...'z':printf("a.....z\n");break;
        case'A'...'Z':printf("A......Z\n");break;
        case'0'...'9':printf("0.....9\n");break;
        default:printf("default\n");break;
    }
}
