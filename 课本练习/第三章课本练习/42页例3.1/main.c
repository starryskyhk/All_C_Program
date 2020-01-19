#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{int num_of_bars;
double one_weight,total_weight;//引入两个变量
printf("请输入一包糖的个数:");
scanf("%d",&num_of_bars);
printf("请输入每颗糖的重量:");
scanf("%lf",&one_weight);
total_weight=one_weight*num_of_bars;
printf("总重量为:%f\n",total_weight);
printf("请输入一包糖的个数:");
scanf("%d",&num_of_bars);
printf("请输入每颗糖的重量:");
scanf("%lf",&one_weight);
total_weight=one_weight*num_of_bars;
printf("总重量为:%f\n",total_weight);
return 0;
}
