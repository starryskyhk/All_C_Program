#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    double p;
    printf("���㼸�Ľ׳�:");
    scanf("%d",&n);
    while(n<=0)
    {
        printf("���ݴ���!�����벻С��1������");
        scanf("%d",&n);

    }
    i=1,p=1;
    do
    {
        p*=i;
        i++;
    }while(i<=n);
    printf("%d!=%.f",n,p);/*%.lf  ����С��λ0λ���*/
    return 0;
}