#include<stdio.h>
/*void ni(int n)
{
    if(n!=0)
    {
        printf("%d",n%10);
        ni(n/10);
        }
        else
            exit(0);
}*/
void ni(int n)
{
    printf("%d",n%10);
    if(n/10!=0)
        ni(n/10);
}
int main()
{
    int n;
    do{
            printf("������һ��������");
    scanf("%d",&n);
    }while(n<0);
    printf("%i����˳�����Ϊ��",n);
    ni(n);
    printf("\n");
    return 0;
}
