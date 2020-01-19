#include<stdio.h>
void main()
{
    int n,j,k,i;
	

    h:do{
        printf("请输入上半三角形的行数：");
        scanf("%d",&n);
    }while(n<=0);
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
        if(i==2)
        {
             for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
        if(i==n)
		
			
		
            goto h;
		

        }
    }
}
}





