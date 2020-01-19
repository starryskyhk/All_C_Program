
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void color(const unsigned short color1)//自定义，根据参数改变字体颜色
{
    if(color1>=0&&color1<=15)//参数在0-15的范围颜色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1);//改变字体颜色
    else//默认为白色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);

}
int main()
{
color(0);
printf("黑色\n");
color(1);
printf("蓝色\n");
//省略个别的
color(16);//返回默认颜色（白色）
return 0;
}






/*#include<stdio.h>
#include<stdlib.h>
void main()
{
  system("color 50");
  printf("我");
  system("color 51");
  printf("喜");
   system("color A8");
   printf("欢");
    system("color BC");
	printf("你");
	system("color 35");
		  printf("，");
	 system("color 56");
	 printf("做");
	  system("color FD");
	  printf("我");
	   system("color 17");
	   printf("女");
	    system("color 60");
		printf("朋");
		  system("color 46");
		  printf("友");
		  system("color 40");
		  printf("吧\n");
*/








