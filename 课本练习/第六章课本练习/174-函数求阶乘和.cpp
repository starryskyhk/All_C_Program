#include<Stdio.h>
int jiecheng(int n)
{
    if(n==1)
    return 1;//���nΪ1.�򷵻�1
    else
        return n*jiecheng(n-1);//�ݹ���ã�����n��jiecheng(n-1)

}
int main()
{
    int n,i,sum=0;
    printf("��1�����ٵĽ׳˺ͣ�");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=jiecheng(i);
        printf("1!+......%d!=%d",n,sum);
}
