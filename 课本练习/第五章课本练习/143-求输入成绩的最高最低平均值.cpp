#include<stdio.h>
int main()
{
    double score;
    double MIN=0,MAX=100;
    double min=MAX,max=MIN;
    double count=0,total=0;
    printf("����ɼ���0-100��q�˳���\n");
    while(scanf("%lf",&score)==1)
    {
        while(getchar()!='\n');
        if(score>MAX||score<MIN)
            {
                printf("���ݴ�����������\n");
        continue;
        }
        printf("�������Ч�ɼ���%.2f\n",score);
        min=score<min?score:min;
        max=score>max?score:max;
        total+=score;
        count++;
        printf("����ɼ���Q�˳�\n");
    }
    if(count>0)
    {
        printf("%10s%10s%10s\n","��ͷ�","��߷�","ƽ��ֵ");
        printf("%10.2f%10.2f%10.2f\n",min,max,total/count);
    }
    else
    {
        printf("�û������˳���");
    }
    return 0;
}