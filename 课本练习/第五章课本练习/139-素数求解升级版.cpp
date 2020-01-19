#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n1,k,j,i,n2,n;
    i=0;
     do{
            
            printf("请选择输出多少到多少的素数(>3):");
            scanf("%d,%d",&n1,&n2);
     }while(n1<3||n2<3||n1>n2);
     do{
            printf("每行输出几个素数(大于0的整数):");
     scanf("%d",&n);
     }while(n<1);
     for(j=n1;j<=n2;j++)
     {
         for(k=2;k<j;k++)
            if(j%k==0)
            break;
         if(j==k)
         {
           
             printf("%5d",j);
             i++;
             if(i%n==0)
                printf("\n");
         }

         }
         printf("\n");
         return 0;
}
