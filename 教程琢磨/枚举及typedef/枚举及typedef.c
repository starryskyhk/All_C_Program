#include<stdio.h>
typedef int so;//����һ���µ��������ͣ����ֽ���so��Ϊint ��
#define so char//���Ϊ�﷨�滻����so�滻Ϊchar���ͣ������Ƕ������µ���������
enum a
{
    red/*����������ı��ֵ������ļ�1*/,blue=5,yellow
};
int main01()
{
    //blue=5;//ö�����Ϊ�����������޸�����ֵ
    int color=blue;
    printf("%d",red);

}
int main()
{
    so a;
    a=5;
    printf("%d",a);
}