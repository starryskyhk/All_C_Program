#include<stdio.h>
int jiecheng(int n)
{
    double p=1;
    int i;
    for(i=1;i<=n;i++)
        p*=i;//����׳�
    return p;//���ؽ׳�pֵ
}
int main()
{
    int m,n;
    printf("������m��n��ֵ��");
    scanf("%d,%d",&m,&n);
    printf("%d",jiecheng(m)/(jiecheng(n)*jiecheng(m-n)));//���


}
