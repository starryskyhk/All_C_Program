
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void color(const unsigned short color1)//�Զ��壬���ݲ����ı�������ɫ
{
    if(color1>=0&&color1<=15)//������0-15�ķ�Χ��ɫ
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1);//�ı�������ɫ
    else//Ĭ��Ϊ��ɫ
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);

}
int main()
{
color(0);
printf("��ɫ\n");
color(1);
printf("��ɫ\n");
//ʡ�Ը����
color(16);//����Ĭ����ɫ����ɫ��
return 0;
}






/*#include<stdio.h>
#include<stdlib.h>
void main()
{
  system("color 50");
  printf("��");
  system("color 51");
  printf("ϲ");
   system("color A8");
   printf("��");
    system("color BC");
	printf("��");
	system("color 35");
		  printf("��");
	 system("color 56");
	 printf("��");
	  system("color FD");
	  printf("��");
	   system("color 17");
	   printf("Ů");
	    system("color 60");
		printf("��");
		  system("color 46");
		  printf("��");
		  system("color 40");
		  printf("��\n");
*/








