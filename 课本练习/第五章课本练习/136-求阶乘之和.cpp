#include<stdio.h>
int main()
{
    int n;
    do{
        printf("求1到几的阶乘(>=2)：");
        scanf("%d",&n);

    }while(n<1);
    double sum=0;
    unsigned i;
    for( i=1;i<=n;i++)
    {
        double p=1;
        unsigned j=1;
        for(j=1;j<=i;j++)
            p*=j;
            sum+=p;
    }
    printf("1!+2!+....+%d!=%.f\n",n,sum);
    return 0;

}
