#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    switch(number)
    {
        case 0 ... 9:
			printf("The number %d has 1 digits",number);
			break;
        case 10 ... 99:
			printf("The number %d has 2 digits",number);
			break;
        case 100 ... 999:
			printf("The number %d has 3 digits",number);
			break;
        case 1000 ... 9999:
			printf("The number %d has 4 digits",number);
			break;
        case 10000 ... 99999:
			printf("The number %d has 5 digits",number);
			break;
        default:
			printf("输入不符合要求\n");
			break;

    }
    return 0;
}
