#include<stdio.h>
void fun(int n)
{
    printf("%d",n%10);//ȡ����λ
if(n/10!=0)//�����10ȡ������0
    fun(n/10);//��ô���س�10ȡ��

}
void main()
{
    int n;
    printf("������һ��������");
    scanf("%d",&n);
    printf("�������Ϊ��");
    fun(n);
}
