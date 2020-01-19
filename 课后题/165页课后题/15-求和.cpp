#include<stdio.h>
int main()
{
    int i,j,sum,a,n,l;
    sum=0;
    j=10;
    do{
        printf(" ‰»Îa,n£∫");
        scanf("%d,%d",&a,&n);
    }while(n<=0);
    l=a;
    for(i=1;i<=n;i++)
    {


        sum+=a;
        a=l*j+a;
        j=j*10;
    }
    printf("%d",sum);
    return 0;
}
