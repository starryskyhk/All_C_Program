#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int i,j,k;
    while(1)
        {
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
        printf("*");
    printf("\n");
    }
    }
    return 0;
}
