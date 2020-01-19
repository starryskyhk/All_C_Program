#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
void  main()
{
  int n_int= INT_MAX;//用Int最大值初始化n_int
  short n_short=SHRT_MAX;//用short最大值初始化n_short
  long n_long=LONG_MAX;//用long最大值初始化n_ilong
  //运用sizeof运算符得到的变量的字节数
  printf("int型的变量的长度为：%dbytes.\n",sizeof(int));
  printf("short型的变量的长度为：%dbytes.\n",sizeof(short));
  printf("long型的变量的长度为：%dbytes.\n",sizeof(long));
  //以下为输出各整型的最大值
  printf("int的最大值为：%d\n",n_int);
    printf("short的最大值为：%d\n",n_short);
     printf("long的最大值为：%d\n",n_long);

}
