#include<stdio.h>
int main()
{
    int x,y,z,i,n;
    i=0;
    printf("每行显示几组:");
    scanf("%d",&n);
    for(x=1;x<10;x++)
    {
        for(y=1;y<10;y++)
        {
            for(z=1;z<10;z++)
                {
                    if((x*100+y*10+z)-(z*100+y*10+x)==297)
                {
                    printf("%d,%d,%d    ",x,y,z);
                i++;
                if(i%n==0)
                    printf("\n");
                }
                }
        }
    }
    return 0;
}
