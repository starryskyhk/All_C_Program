#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    int max,min;//max存放最大值，min存放最小值
    printf("Enter four integer:");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    if(a>b)max=a;//如果a大于b，则将a赋给max
    else max=b;//在a,b中选出最大值
    if(c>max) max=c;
    if(d>max) max=d;//用max再和与c,d做比较



    if(a<b) min=a;
    else min=b;
    if(c<min) min=c;
    if(d<min) min=d;//原理同上
    printf("Largest:%d\nSmallest:%d\n",max,min);

return 0；

}