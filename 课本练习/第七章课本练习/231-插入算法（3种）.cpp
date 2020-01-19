/*#include<stdio.h>
int main()
{
    
    int n;
    do{
        printf("输入原始序列的个数：");
        scanf("%d",&n);
    }while(n<=1);    //让用户输入他要输入的原始序列的个数
	int a[n];   //定义一个数组，里面有n个数
    int i=0；   //定义一个变量i，初值为0
    printf("输入%d个原始数列：\n",n); //提示用户让他输入n个原始数列
   
        printf("输入数列中的第%d个数：",i+1);
        scanf("%d",&a[i]);  //让用户先输入原始数列的第一个数

    do{
        printf("输入数列中的第%d个数：",i+2);    //给予用户提示
        scanf("%d",&a[i+1]);     //用循环让用户输入接下来的数
        if(a[i]>a[i+1])
        {
            printf("顺序错误，输入的数应不小于%d\n",a[1]);//如果输入错误，提示用户不能小于前一个数
            continue;   //如果用户没有按从小到大的顺序输入，则返回重新输入
        }
        i++;  //i加1
    }while(i<n-1);
    printf("原始数列为：\n");
    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");  //将原始序列输出
    char ch;   //定义一个字符型的变量
    do{
        int num;
        do{
		printf("请输入要插入的数：");
        scanf("%d",&num);
		}while(num<0);  //让用户输入要插入的数并对其进行限制
        int i,j;  //定义两个变量用于循环
        for(i=0;i<n;i++)
            if(num<=a[i])
            break;//  让要插入的数一一与原始序列中的比较，直到要插入的这个数小于原始序列中某个数时，退出
        if(i==n)//如果此时i=n的话，即要插入的这个数在这个序列里最大
            a[i]=num;   //则把这个数赋给a[i]
        else
        {
            for(j=n-1;j>=i;j--)
                a[j+1]=a[j];  //如果是其他情况，则把这个数后的的序列全部向后推一个数
            a[i]=num;  //然后再把要插入的这个数赋给a[i]
        }
        n++;
        printf("插入后的数据序列为：");
        for(i=0;i<n;i++)
            printf("%10d",a[i]);
        printf("\n");//将插入后的数据序列输出
        printf("继续(Y/N)？:");//询问用户是否继续
        while(getchar()!='\n')continue;//清除缓冲区多余字符
        ch=getchar();输入

    }while(ch=='Y'||ch='y');//用户选择Y或者y后继续插入
}*/




















#include<stdio.h>
void shuru(int a[],int n)//定义输入函数
{
    printf("请输入%d个数（用空格隔开）:\n",n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);//让用户输入n个数，用空格隔开
}
void paixu(int a[],int n)//定义排序函数
{
    int i,t,j;
    for(j=0;j<n;j++)
    for(i=0;i<n-1;i++)
        if(a[i]>a[i+1])
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;//如果前面的数大于后面的数，则交换位置
    }
}
void shuchu(int a[],int n)
{
    int i;
    printf("原始数列为：\n");
    for(i=0;i<n;i++)
        printf("%5d",a[i]);
        printf("\n");//输出排序后的原始序列
}



/*int main()
{

    int n;
 do{
        printf("输入原始序列的个数:");
        scanf("%d",&n);
    }while(n<1);//输入原始数据的个数
    int a[n];//定义一个数组
    shuru(a,n);//定义一个输入函数,对这些数进行输入
    paixu(a,n);//对这些数进行排序
    shuchu(a,n);//输出
    char ch;
    do{
        int num;
        printf("请输入要插入的数：");
        scanf("%d",&num);//选择要插入的数
        int i,j;
        for(i=0;i<n;i++)
            if(num<=a[i])
            break;//如果这个数小于后面的数,则退出
        if(i==n)
            a[i]=num;//如果这两个数相等的话,则将这个赋给a[i]
        else
        {
            for(j=n-1;j>=i;j--)
                a[j+1]=a[j];//将这个数之后的都向后移动
            a[i]=num;//再将这个数赋给a[i]
        }
        n++;
        printf("插入后的数据序列为：");
        for(i=0;i<n;i++)
            printf("%10d",a[i]);
        printf("\n");
        printf("继续(Y/N)？:");
        while(getchar()!='\n')continue;
        ch=getchar();

    }while(ch=='Y'||ch=='y');*/






int main()
{

    int n,i;
 do{
        printf("输入原始序列的个数:");
        scanf("%d",&n);
    }while(n<1);//输入原始数据的个数
    int a[n];//定义一个数组
    shuru(a,n);//定义一个输入函数,对这些数进行输入
    paixu(a,n);//对这些数进行排序
    shuchu(a,n);//输出
    char ch;
    do{
        int num;
        printf("请输入要插入的数：");
        scanf("%d",&num);//选择要插入的数
       for(i=n-1;i>=0;i--)//从原始序列最后一个数开始比较
           {

           if(num<=a[i])//如果这个数小于a[i]的话
              {
                  a[i+1]=a[i];a[i]=num;//将a[i]推后一个数，将num赋给a[i]
                  }
              else if(num>a[n-1])
                 a[n]=num;//如果要插入的这个数大于数组里最后一个元素，则直接将要插入的这个数放在数组的最后，即a[n]
              else
                 break;
           }
           n++;//n加1
           printf("插入后的数据序列为：");
        for(i=0;i<n;i++)
            printf("%10d",a[i]);//将插入后的数据序列输出
           printf("\n");
           printf("继续(Y/N)？:");//询问用户是否继续
        while(getchar()!='\n')continue;//清除缓冲区多余字符
        ch=getchar();
        }while(ch=='Y'||ch=='y');//用户选择Y或者y后继续插入
}

