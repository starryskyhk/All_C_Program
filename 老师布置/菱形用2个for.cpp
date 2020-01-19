#include<stdio.h>
void main()
{
	int i,j,k,n,m;
 do{
        printf("请输入菱形行数（奇数,且大于等于三）：");
        scanf("%d",&n);
    }while(n<3||n%2==0);
    m=n/2+1;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m-i;j++)
            printf(" ");
            for(k=1;k<=2*i-1;k++)	
			{
			
                printf("*");
			}
                printf("\n");
				}
       
		   for(i=m-1;i>=0;i--)
    {
        for(j=1;j<=m-i;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
		   }


}


