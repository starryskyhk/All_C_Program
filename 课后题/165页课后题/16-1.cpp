#include<stdio.h>
int main()
{
    char a;
    int i,b;
    a='A';
   for(i=1;i<=7;i++)
   {
       for(b=1;b<=i;b++)

        {
            printf("%c",a++);
       
        if(a=='Z')
            break;
            }
        printf("\n");
   }
   return 0;
   }