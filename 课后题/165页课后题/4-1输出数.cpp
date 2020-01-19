#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    j=0;
    printf("1到100中不能被2或3或6整除的数有：\n");
    for(i=1;i<=100;i++)
    {
        if(i%2!=0||i%3!=0||i%6!=0)
             {

                printf("%5d",i);
             j++;
            if(j%5==0)
                printf("\n");
             }

    }
    printf("\n");
    return 0;
}
