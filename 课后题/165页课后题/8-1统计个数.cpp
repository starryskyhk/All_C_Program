#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int a,b,c,j,i;
    i=0;
    printf("每行显示几个？:");
    scanf("%d",&j);
    for(n=100;n<1000;n++)
    {
       a=n%10;
       b=n/10%10;
       c=n/100%10;
       if(a==c&&a!=b&&b!=c&&n%2==0)
           {

            printf("%5d",n);
            i++;
            if(i%j==0)
                printf("\n");
           }
    }
    return 0;
}
