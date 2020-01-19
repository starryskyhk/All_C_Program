#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    for(a=0;a<=100;a++)
    {
        for(b=1;b<100-a;b++)
            {
                c=(100-a-b);
                if(5*a+3*b+c/3==100&&c%3==0&&a+b+c==100)
            printf("%d,%d,%d\n",a,b,c);
            }

    }
    return 0;

}
