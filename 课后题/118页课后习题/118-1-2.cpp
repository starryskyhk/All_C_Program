#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number,a;
    printf("Enter a number:");
    scanf("%d",&number);
	if(number>=0&&number<=9)
		a=0;
	else if(number>=10&&number<=99)
		a=1;
	else if(number>=100&&number<=999)
		a=2;
	else if(number>=1000&&number<=9999)
		a=3;
	else if(number>=10000&&number<=99999)
		a=4;
		else
		a=5;

    switch(a)
    {
        case 0:
			printf("The number %d has 1 digits\n",number);
			break;
        case 1:
			printf("The number %d has 2 digits\n",number);
			break;
        case 2:
			printf("The number %d has 3 digits\n",number);
			break;
        case 3:
			printf("The number %d has 4 digits\n",number);
			break;
        case 4:
			printf("The number %d has 5 digits\n",number);
			break;
        default:
			printf("输入不符合要求\n");
			break;

    }
    return 0;
}
