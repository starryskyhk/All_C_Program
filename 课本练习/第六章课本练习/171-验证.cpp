#include<stdio.h>
#include<stdlib.h>
int isprme(int number)
{
    int i;
    for(i=2;i<=number/2;i++)
        if(number%i==0)return 0;//���nuber��i==0�򷵻ؼ�ֵ0,���ж�number�Ƿ�Ϊ����
    return 1;//���򷵻���ֵ
}
    int main()
    {
        int even_number;
        do{
          printf("������һ��ż����");
          scanf("%d",&even_number);
        }while(!(even_number>0&&even_number%2==0));
        int number;
        for(number=2;number<even_number/2;number++)
        {
            if(isprme(number)&&isprme(even_number-number))//�����Ϊ����
            {
                printf("%i�ɷֽ�Ϊ:%i+%i\n",even_number,number,even_number-number);
                break;
            }
            if(number>even_number*2)
                printf("����");
        }

return 0;

}