 #include<stdio.h>
#include<stdlib.h>
int main()
{
    double a;
    printf("ÇëÊäÈë³É¼¨£º\n");
    scanf("%lf",&a);
    printf("Enter numerical grade: %f\n",a);
    if(a>=90&&a<=100)
        printf("Letter grade: A");
    else if(a>=80&&a<=90)
     printf("Letter grade: B");
    else if(a>=70&&a<=79)
         printf("Letter grade: C");
    else if(a>=60&&a<=69)
         printf("Letter grade: D");
    else if(a>=0&&a<=59)
         printf("Letter grade: F");
    else
        printf("ÊäÈë´íÎó£¡\n");
    return 0;
}
