#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{int num_of_bars;
double one_weight,total_weight;//������������
printf("������һ���ǵĸ���:");
scanf("%d",&num_of_bars);
printf("������ÿ���ǵ�����:");
scanf("%lf",&one_weight);
total_weight=one_weight*num_of_bars;
printf("������Ϊ:%f\n",total_weight);
printf("������һ���ǵĸ���:");
scanf("%d",&num_of_bars);
printf("������ÿ���ǵ�����:");
scanf("%lf",&one_weight);
total_weight=one_weight*num_of_bars;
printf("������Ϊ:%f\n",total_weight);
return 0;
}
