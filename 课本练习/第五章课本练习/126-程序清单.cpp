#include<stdio.h>
#include<stdlib.h>
int main()
{
 char chars;
 unsigned a,b,c,d;
 a=0,b=0,c=0,d=0;
 printf("请输入一串字符，以#结束：\n");
 while((chars=getchar())!='#')//当输入的字符不是#时就行循环
 {
     if(chars>='A'&&chars<='Z'||chars>='a'&&chars<='z')//判断字符是否为字母
        a++;//如果是，a加1
     else if(chars>='0'&&chars<='9')//如果为数字的话
       b++;//b加1
     else//其余的则为符号
        d++;//d加1
     c++;//这是总共输入的字符
 }
 printf("数字有：%d",b);
  printf("字母有：%d",a);
   printf("其他有：%d",d);
    printf("总字符有：%d",c);
    return 0;
} 