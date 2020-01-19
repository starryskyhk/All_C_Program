/*#include<stdio.h>
int main()
{
    int m,n,i;
   do{
            printf("请输入两个正整数，先小后大：");
    scanf("%d,%d",&m,&n);
   }while(m*n<=0||m>n);
   for(i=m;i>0;i--)//从用户输入的小值开始递减
   {
       if(m%i==0&&n%i==0)//当输入的这两个数除i都为时，
        {
            printf("%d",i);//此时i为最大公约数
       break;}//然后退出
   }
}*/




#include<stdio.h>
void yue(int m,int n,int i)
 {
     if(m%i==0&&n%i==0)
        printf("%d",i);//当m,n除i都余0时,
     else
        yue(m,n,i-1);//要不然,返回m,n,i-1
 }








 int main()
 {
     int m,n,i;
   do{
            printf("请输入两个正整数，先小后大：");
    scanf("%d,%d",&m,&n);
   }while(m*n<=0||m>n);
yue(m,n,m);//返回的第三个m为函数中的I,这是为了防止递归时改变m的值
return 0;
 }







