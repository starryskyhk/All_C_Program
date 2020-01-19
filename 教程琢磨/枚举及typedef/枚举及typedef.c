#include<stdio.h>
typedef int so;//定义一个新的数据类型，名字叫做so，为int 型
#define so char//这个为语法替换，将so替换为char类型，并不是定义了新的数据类型
enum a
{
    red/*可以在这里改变初值，后面的加1*/,blue=5,yellow
};
int main01()
{
    //blue=5;//枚举里的为常量，不能修改他的值
    int color=blue;
    printf("%d",red);

}
int main()
{
    so a;
    a=5;
    printf("%d",a);
}