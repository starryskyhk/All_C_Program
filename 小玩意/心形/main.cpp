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
//# include <stdio.h>
//# include <math.h>


# define U 0.06
# define V 0.025


# define M 1.1
# define N 1.2


int main(void)
{

system("color 50");
  printf("                     ____________________        我");
  system("color 51");
  Sleep(300);
  printf("喜");
   system("color A8");
   Sleep(300);
   printf("»¶");
    system("color BC");Sleep(300);
	printf("Äã");
	system("color 35");Sleep(300);
		  printf("£¬");
	 system("color 56");Sleep(300);
	 printf("×ö");
	  system("color FD");Sleep(300);
	  printf("ÎÒ");
	   system("color 17");Sleep(300);
	   printf("ÄÐ");
	    system("color 60");Sleep(300);
		printf("Åó");
		  system("color 46");Sleep(300);
		  printf("ÓÑ");
		  system("color 40");Sleep(300);
		  printf("°É                  ______________________\n");
	system("color D4");Sleep(300);
float x, y;
float m, n;


for ( y=2; y>=-2; y-=U )
{
for ( x=-1.2; x<=1.2; x+=V)
{
if ( ( ( (x*x + y*y - 1)*(x*x + y*y - 1)*(x*x + y*y - 1) - x*x*y*y*y ) <= 0 ) )

printf("*");
else
printf(" ");
}
printf("\n");
}
getchar();


return 0;
}

