 #include<stdio.h>
 int sushu(int n,int a)
 {
     int i;
     if(n==a)
        return 1;
       if(n%a==0)
       return 0;
       else
        sushu(n,a+1);

 }
 int main()
 {
     int i;
     for(i=3;i<=100;i++)
       if(sushu(i,2))
        printf("%d\n",i);
       else
        continue;
 }
