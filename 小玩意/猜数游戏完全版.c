#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<windows.h>
# define U 0.06
# define V 0.025


# define M 1.1
# define N 1.2
int shijian()

{
clock_t t0,dt;
    int flag;
t0=clock();//���õ�ǰʱ��
        flag=1;
        while(!_kbhit())//����Ƿ��м�������
            {
            dt=clock()-t0;//���ڵ�ʱ���ȥ֮ǰ��ʱ��
        if(dt>=10*CLOCKS_PER_SEC)//�����ʱ�����3��ʱ
            flag=0;//Ϊ��ֵ
        }
        if(flag==0)
            {
			printf("\n\n�㳬ʱ�ˣ���\n������3����˳�\n");//Ϊ�ٵģ�����3����˳�����
		Sleep(3000);//�ȴ�3��
		exit(0);//��������
              }

}


void xinxing()
{

    float x, y;
float m, n;
 printf("��ϲ��,���Ǵ��������ÿɰ��������ֹۣ����ʹ󷽵���¶���\n����һ�Ŵ����!!");
Sleep(1500);
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
}


void color(const unsigned short color1)
{
    if(color1>=0&&color1<16)
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color1);
    else
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
}//���ÿ���̨����ɫ����
int main()
{
    char ch;
   // clock_t t0,dt;
   // int flag;
    int a,i,n,m,j=1;
    color(6);
	printf("������������������������������������������ӭ������Ϸ����,��ѡ����Ϸ�ȼ�:������������������������������������������������\n");
    color(2);
    printf("                                                *1:����*\n");
    color(4);
     printf("                                                *2:�м�*\n");
     color(10);
      printf("                                                *3:�߼�*\n");
      color(5);
       printf("                                         **4:�����޵е���ģʽ�����أ�**\n\n\n\n");
       color(8);
    printf("-----------------------------------------ѡ����Ϸ�ȼ�ǰ�ı�ż���------------------------------------------------------\n");
    h:do{
        color(3);
		printf("\n��ѡ����Ҫ���е���Ϸ�ȼ���1--4��:");
            scanf("%d",&m);
            }while(m!=1&&m!=2&&m!=3&&m!=4);//�������������
    srand((int)time(NULL));//����һ�������
    if(m==2)
    {
        color(1);
        printf("****************************************��ӭ�����м����棬����������10�εĻ���******************************************\n");
               n=rand()%100+1;//��100ȡ�࣬�����������Ϊ1��99��Ȼ���1

            for(i=0;i<10;i++)
    {
        color(j);
        printf("\n����10��������һ��1��100������:\n");
		color(j);
		shijian();//����һ��ʱ�亯�������û������ʱ���������

        scanf("%d",&a);
        j++;
        if(j==15)
            j=1;//����ɫ��15ʱ����j����Ϊ1����ֹ֮���ǰ�ɫ

        if(a<n)
           color(j+1) ,printf("\n�������ʧ�������С��\n-----------------------");
        if(a>n)
            color(j+1),printf("\n��´��ˣ��������\n------------------------\n");
        if(a==n)
        {
            color(12),

            xinxing();//������ȷʱ���������δ���
            break;
        }
    }
    if(i==10)
	printf("\n\n��Ļ��������ˣ����ź�\n");
	printf("�Ƿ������Ϸ(Y/N)��:");//ѯ���û��Ƿ����
        while(getchar()!='\n')continue;//��������������ַ�
        ch=getchar(); //����
        if(ch=='y'||ch=='Y')
            goto h;
    }

    if(m==1)
        {
            color(1);
            printf("*****************************************��ӭ�����������棬����������3�εĻ���******************************************\n");
            n=rand()%10+1;
    for(i=0;i<3;i++)
    {
         color(j);
        printf("\n����10��������һ��1��10������:\n");
		shijian();
        color(j);
        scanf("%d",&a);

        j++;
        if(j==15)
            j=1;
        if(a<n)
            color(j+1) ,printf("\n�������ʧ�������С��\n---------------------------------");
        if(a>n)
            printf("\n��´��ˣ��������\n---------------------------------");
        if(a==n)
        {
            color(12);
            xinxing();
            break;
        }
    }
    if(i==3)
	printf("\n\n��Ļ��������ˣ����ź�\n");
	printf("�Ƿ������Ϸ(Y/N)��:");//ѯ���û��Ƿ����
        while(getchar()!='\n')continue;//��������������ַ�
        ch=getchar(); //����
        if(ch=='y'||ch=='Y')
            goto h;
    }
    if(m==3)
     {
         color(1);
      printf("****************************************��ӭ�����߼����棬����������15�εĻ���******************************************\n");
         n=rand()%1000+1;
    for(i=0;i<15;i++)
    {
        color(j);
        printf("\n����10��������һ��1��1000������:\n");
		shijian();
        color(j);
        scanf("%d",&a);
        j++;
        if(j==15)
            j=1;
        if(a<n)
            color(j+1) ,printf("\n�������ʧ�������С��\n-------------------------------------");
        if(a>n)
            color(j+1),printf("\n��´��ˣ��������\n-------------------------------------");
        if(a==n)
        {
            color(12);

            xinxing();
            break;
        }
    }
    if(i==15)
	printf("\n\n��Ļ��������ˣ����ź�\n");
	printf("�Ƿ������Ϸ(Y/N)��:");//ѯ���û��Ƿ����
        while(getchar()!='\n')continue;//��������������ַ�
        ch=getchar(); //����
        if(ch=='y'||ch=='Y')
            goto h;
    }
    if(m==4)
    {
        color(1);
      printf("**********��ӭ���������޵е���ģʽ������������1�εĻ���,��һ��ֻ�����˶�����ͨ����ͨ�����ˣ���ɻ��������֮��**********\n");
         n=rand()%1000+1;
        color(j);
        printf("\n����10��������һ��1��10000������:\n");
		shijian();
        color(j);
        scanf("%d",&a);
        if(a==n)

            {
                color(12);
                printf("\n\n��ϲ��,����ĳ�������Ǵ��������ÿɰ��������ֹۣ����ʹ󷽵���¶��ˣ���������\n��¶���!!!!!!!");
            xinxing();
            printf("����(Y/N)��:");//ѯ���û��Ƿ����
        while(getchar()!='\n')continue;//��������������ַ�
        ch=getchar(); //����
        if(ch=='y'||ch=='Y')
            goto h;
            }
        else
        {
            color(5);
        printf("\n\n���ź����㲻����λ���˶����㽫�������!!!!!!!!!!������û�л������¿�ʼ��\n");
        }




}
}
