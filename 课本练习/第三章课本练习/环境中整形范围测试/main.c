#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
void  main()
{
  int n_int= INT_MAX;//��Int���ֵ��ʼ��n_int
  short n_short=SHRT_MAX;//��short���ֵ��ʼ��n_short
  long n_long=LONG_MAX;//��long���ֵ��ʼ��n_ilong
  //����sizeof������õ��ı������ֽ���
  printf("int�͵ı����ĳ���Ϊ��%dbytes.\n",sizeof(int));
  printf("short�͵ı����ĳ���Ϊ��%dbytes.\n",sizeof(short));
  printf("long�͵ı����ĳ���Ϊ��%dbytes.\n",sizeof(long));
  //����Ϊ��������͵����ֵ
  printf("int�����ֵΪ��%d\n",n_int);
    printf("short�����ֵΪ��%d\n",n_short);
     printf("long�����ֵΪ��%d\n",n_long);

}
