#include<stdio.h>
int main()
{
    double n,sum;int i;
    do{
        printf("��������1�����ٽ׳˵����ͣ�");
        scanf("%lf",&n);
    }while(n<0);
    for(i=1;i<=n;i++)
    {
        double p=1;
        unsigned j=1;
        while(j<=i)
        {
            p*=j;
            j++;
        }//�����ǰ�Ľ׳�
        sum=1/p+sum;//֮ǰ�ĺͼ��ϴ˴εĽ׳˵�����
    }
    printf("%f",sum+1);//��Ŀ��������
	return 0;
}
