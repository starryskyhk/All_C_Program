#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    int max,min;//max������ֵ��min�����Сֵ
    printf("Enter four integer:");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    if(a>b)max=a;//���a����b����a����max
    else max=b;//��a,b��ѡ�����ֵ
    if(c>max) max=c;
    if(d>max) max=d;//��max�ٺ���c,d���Ƚ�



    if(a<b) min=a;
    else min=b;
    if(c<min) min=c;
    if(d<min) min=d;//ԭ��ͬ��
    printf("Largest:%d\nSmallest:%d\n",max,min);

return 0��

}