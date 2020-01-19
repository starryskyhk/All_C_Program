#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1,ch2;
    printf("输入：");
    ch1=getchar();getchar();ch2=getchar();
    printf("结果为：%c,%c\n",ch1,ch2);
    printf("输入：");
    getchar();ch1=getchar();getchar();ch2=getchar();
    printf("结果为：%c,%c\n",ch1,ch2);
    return 0;
}
