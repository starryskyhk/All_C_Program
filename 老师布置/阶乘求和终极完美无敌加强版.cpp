#include<stdio.h>
int main()
{
    int n,sum,i,j;
    do{
        printf("��1�����Ľ׳ˣ�");
        scanf("%d",&n);
    }while(n<1);

sum=1,j=1;

    for(i=1;i<n;i++)
    {
        j*=i;
    sum=(sum+j*(i+1));
    }
    printf("%d\n",sum);


}



