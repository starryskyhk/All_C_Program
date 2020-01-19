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
t0=clock();//调用当前时间
        flag=1;
        while(!_kbhit())//检测是否有键盘输入
            {
            dt=clock()-t0;//现在的时间减去之前的时间
        if(dt>=10*CLOCKS_PER_SEC)//当这个时间大于3秒时
            flag=0;//为假值
        }
        if(flag==0)
            {
			printf("\n\n你超时了！！\n程序将在3秒后退出\n");//为假的，则在3秒后退出程序
		Sleep(3000);//等待3秒
		exit(0);//结束程序
              }

}


void xinxing()
{

    float x, y;
float m, n;
 printf("恭喜你,机智聪明，活泼可爱，善良乐观，勤劳大方的你猜对了\n送你一颗大红心!!");
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
}//调用控制台的颜色控制
int main()
{
    char ch;
   // clock_t t0,dt;
   // int flag;
    int a,i,n,m,j=1;
    color(6);
	printf("————————————————————欢迎来到游戏界面,请选择游戏等级:————————————————————————\n");
    color(2);
    printf("                                                *1:初级*\n");
    color(4);
     printf("                                                *2:中级*\n");
     color(10);
      printf("                                                *3:高级*\n");
      color(5);
       printf("                                         **4:超级无敌地狱模式（慎重）**\n\n\n\n");
       color(8);
    printf("-----------------------------------------选择游戏等级前的标号即可------------------------------------------------------\n");
    h:do{
        color(3);
		printf("\n请选择你要进行的游戏等级（1--4）:");
            scanf("%d",&m);
            }while(m!=1&&m!=2&&m!=3&&m!=4);//对输入进行限制
    srand((int)time(NULL));//产生一个随机数
    if(m==2)
    {
        color(1);
        printf("****************************************欢迎来到中级界面，在这里你有10次的机会******************************************\n");
               n=rand()%100+1;//除100取余，产生的随机数为1到99，然后加1

            for(i=0;i<10;i++)
    {
        color(j);
        printf("\n请在10秒内输入一个1到100的整数:\n");
		color(j);
		shijian();//定义一个时间函数，对用户输入的时间进行限制

        scanf("%d",&a);
        j++;
        if(j==15)
            j=1;//当颜色到15时，让j重新为1，防止之后都是白色

        if(a<n)
           color(j+1) ,printf("\n你很让我失望，你猜小了\n-----------------------");
        if(a>n)
            color(j+1),printf("\n你猜大了，真服你了\n------------------------\n");
        if(a==n)
        {
            color(12),

            xinxing();//输入正确时，调用心形代码
            break;
        }
    }
    if(i==10)
	printf("\n\n你的机会用完了，很遗憾\n");
	printf("是否继续游戏(Y/N)？:");//询问用户是否继续
        while(getchar()!='\n')continue;//清除缓冲区多余字符
        ch=getchar(); //输入
        if(ch=='y'||ch=='Y')
            goto h;
    }

    if(m==1)
        {
            color(1);
            printf("*****************************************欢迎来到初级界面，在这里你有3次的机会******************************************\n");
            n=rand()%10+1;
    for(i=0;i<3;i++)
    {
         color(j);
        printf("\n请在10秒内输入一个1到10的整数:\n");
		shijian();
        color(j);
        scanf("%d",&a);

        j++;
        if(j==15)
            j=1;
        if(a<n)
            color(j+1) ,printf("\n你很让我失望，你猜小了\n---------------------------------");
        if(a>n)
            printf("\n你猜大了，真服你了\n---------------------------------");
        if(a==n)
        {
            color(12);
            xinxing();
            break;
        }
    }
    if(i==3)
	printf("\n\n你的机会用完了，很遗憾\n");
	printf("是否继续游戏(Y/N)？:");//询问用户是否继续
        while(getchar()!='\n')continue;//清除缓冲区多余字符
        ch=getchar(); //输入
        if(ch=='y'||ch=='Y')
            goto h;
    }
    if(m==3)
     {
         color(1);
      printf("****************************************欢迎来到高级界面，在这里你有15次的机会******************************************\n");
         n=rand()%1000+1;
    for(i=0;i<15;i++)
    {
        color(j);
        printf("\n请在10秒内输入一个1到1000的整数:\n");
		shijian();
        color(j);
        scanf("%d",&a);
        j++;
        if(j==15)
            j=1;
        if(a<n)
            color(j+1) ,printf("\n你很让我失望，你猜小了\n-------------------------------------");
        if(a>n)
            color(j+1),printf("\n你猜大了，真服你了\n-------------------------------------");
        if(a==n)
        {
            color(12);

            xinxing();
            break;
        }
    }
    if(i==15)
	printf("\n\n你的机会用完了，很遗憾\n");
	printf("是否继续游戏(Y/N)？:");//询问用户是否继续
        while(getchar()!='\n')continue;//清除缓冲区多余字符
        ch=getchar(); //输入
        if(ch=='y'||ch=='Y')
            goto h;
    }
    if(m==4)
    {
        color(1);
      printf("**********欢迎来到超级无敌地狱模式，在这里你有1次的机会,这一关只有幸运儿才能通过。通过的人，则可获得那神秘之物**********\n");
         n=rand()%1000+1;
        color(j);
        printf("\n请在10秒内输入一个1到10000的整数:\n");
		shijian();
        color(j);
        scanf("%d",&a);
        if(a==n)

            {
                color(12);
                printf("\n\n恭喜你,上天的宠儿，机智聪明，活泼可爱，善良乐观，勤劳大方的你猜对了！！！！！\n你猜对了!!!!!!!");
            xinxing();
            printf("继续(Y/N)？:");//询问用户是否继续
        while(getchar()!='\n')continue;//清除缓冲区多余字符
        ch=getchar(); //输入
        if(ch=='y'||ch=='Y')
            goto h;
            }
        else
        {
            color(5);
        printf("\n\n很遗憾，你不是这位幸运儿，你将堕入地狱!!!!!!!!!!并且你没有机会重新开始了\n");
        }




}
}
