#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,n1,sum,k;
    
    k=0;
    do{
        printf("������һ������>1��");
        scanf("%d",&n);
    }while(n<=1);
    for(i=1;i<=n;i++)
    {
		j=i;
		sum=0;
		while(1)
		{
			
			
			n1=j%10;
			sum+=n1;
			j/=10;
		
			if(j==0)
				break;	
		}
			if(sum==5&&i%2!=0)
		k++;
                
        
	}

    
    printf("1��%d����%d��\n",n,k);
    return 0;
}	

