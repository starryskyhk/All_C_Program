#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter a fraction:");
    scanf("%d/%d",&a,&b);
    printf("In lowest terms:");
    i=a<b?a:b;
    for(;a%i||b%i;)
        i--;
    a/=i;b/=i;
    printf("%d/%d",a,b);
    return 0;


}
