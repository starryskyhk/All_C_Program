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
int i,j,sum;


for(i=1;i<=1000;i++)
{
    sum=0;
    for(j=1;j<i;j++)
    {
        if(i%j==0)


    sum+=j;

    }
    if(sum==i)




  printf("%5d",i);


}

}