#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void color(const unsigned short color1)
{
if(color1>=0&&color1<=15)
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1);
else
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
}



int main()
{
    int i,j,k,n,m,a,b,c;
	a=b=c=1;
   h: do{
		  a++;
		  color(a);
		  if(a==15)
			  a=1;
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
				b++;
				color(b);
				if(b==15)
					b=1;
                printf("*");
			}
                printf("\n");
                if(i==m-1)
                {
                    for(i=m;i>0;i--)
                    {
                        for(j=1;j<=m-i;j++)
                            printf(" ");
                        for(k=1;k<=2*i-1;k++)
							
						{
							c++;
							color(c);
							if(c==15)
								c=1;
                            printf("*");
						}
                        printf("\n");
                        if(i==1)
                            goto h;
                            //exit(0);

                    }
                }

    }
    return 0;
}
