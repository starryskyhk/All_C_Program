/*#include<stdio.h>
int main()
{
    
    int n;
    do{
        printf("����ԭʼ���еĸ�����");
        scanf("%d",&n);
    }while(n<=1);    //���û�������Ҫ�����ԭʼ���еĸ���
	int a[n];   //����һ�����飬������n����
    int i=0��   //����һ������i����ֵΪ0
    printf("����%d��ԭʼ���У�\n",n); //��ʾ�û���������n��ԭʼ����
   
        printf("���������еĵ�%d������",i+1);
        scanf("%d",&a[i]);  //���û�������ԭʼ���еĵ�һ����

    do{
        printf("���������еĵ�%d������",i+2);    //�����û���ʾ
        scanf("%d",&a[i+1]);     //��ѭ�����û��������������
        if(a[i]>a[i+1])
        {
            printf("˳������������Ӧ��С��%d\n",a[1]);//������������ʾ�û�����С��ǰһ����
            continue;   //����û�û�а���С�����˳�����룬�򷵻���������
        }
        i++;  //i��1
    }while(i<n-1);
    printf("ԭʼ����Ϊ��\n");
    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");  //��ԭʼ�������
    char ch;   //����һ���ַ��͵ı���
    do{
        int num;
        do{
		printf("������Ҫ���������");
        scanf("%d",&num);
		}while(num<0);  //���û�����Ҫ��������������������
        int i,j;  //����������������ѭ��
        for(i=0;i<n;i++)
            if(num<=a[i])
            break;//  ��Ҫ�������һһ��ԭʼ�����еıȽϣ�ֱ��Ҫ����������С��ԭʼ������ĳ����ʱ���˳�
        if(i==n)//�����ʱi=n�Ļ�����Ҫ������������������������
            a[i]=num;   //������������a[i]
        else
        {
            for(j=n-1;j>=i;j--)
                a[j+1]=a[j];  //������������������������ĵ�����ȫ�������һ����
            a[i]=num;  //Ȼ���ٰ�Ҫ��������������a[i]
        }
        n++;
        printf("��������������Ϊ��");
        for(i=0;i<n;i++)
            printf("%10d",a[i]);
        printf("\n");//�������������������
        printf("����(Y/N)��:");//ѯ���û��Ƿ����
        while(getchar()!='\n')continue;//��������������ַ�
        ch=getchar();����

    }while(ch=='Y'||ch='y');//�û�ѡ��Y����y���������
}*/




















#include<stdio.h>
void shuru(int a[],int n)//�������뺯��
{
    printf("������%d�������ÿո������:\n",n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);//���û�����n�������ÿո����
}
void paixu(int a[],int n)//����������
{
    int i,t,j;
    for(j=0;j<n;j++)
    for(i=0;i<n-1;i++)
        if(a[i]>a[i+1])
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;//���ǰ��������ں���������򽻻�λ��
    }
}
void shuchu(int a[],int n)
{
    int i;
    printf("ԭʼ����Ϊ��\n");
    for(i=0;i<n;i++)
        printf("%5d",a[i]);
        printf("\n");//���������ԭʼ����
}



/*int main()
{

    int n;
 do{
        printf("����ԭʼ���еĸ���:");
        scanf("%d",&n);
    }while(n<1);//����ԭʼ���ݵĸ���
    int a[n];//����һ������
    shuru(a,n);//����һ�����뺯��,����Щ����������
    paixu(a,n);//����Щ����������
    shuchu(a,n);//���
    char ch;
    do{
        int num;
        printf("������Ҫ���������");
        scanf("%d",&num);//ѡ��Ҫ�������
        int i,j;
        for(i=0;i<n;i++)
            if(num<=a[i])
            break;//��������С�ں������,���˳�
        if(i==n)
            a[i]=num;//�������������ȵĻ�,���������a[i]
        else
        {
            for(j=n-1;j>=i;j--)
                a[j+1]=a[j];//�������֮��Ķ�����ƶ�
            a[i]=num;//�ٽ����������a[i]
        }
        n++;
        printf("��������������Ϊ��");
        for(i=0;i<n;i++)
            printf("%10d",a[i]);
        printf("\n");
        printf("����(Y/N)��:");
        while(getchar()!='\n')continue;
        ch=getchar();

    }while(ch=='Y'||ch=='y');*/






int main()
{

    int n,i;
 do{
        printf("����ԭʼ���еĸ���:");
        scanf("%d",&n);
    }while(n<1);//����ԭʼ���ݵĸ���
    int a[n];//����һ������
    shuru(a,n);//����һ�����뺯��,����Щ����������
    paixu(a,n);//����Щ����������
    shuchu(a,n);//���
    char ch;
    do{
        int num;
        printf("������Ҫ���������");
        scanf("%d",&num);//ѡ��Ҫ�������
       for(i=n-1;i>=0;i--)//��ԭʼ�������һ������ʼ�Ƚ�
           {

           if(num<=a[i])//��������С��a[i]�Ļ�
              {
                  a[i+1]=a[i];a[i]=num;//��a[i]�ƺ�һ��������num����a[i]
                  }
              else if(num>a[n-1])
                 a[n]=num;//���Ҫ�����������������������һ��Ԫ�أ���ֱ�ӽ�Ҫ���������������������󣬼�a[n]
              else
                 break;
           }
           n++;//n��1
           printf("��������������Ϊ��");
        for(i=0;i<n;i++)
            printf("%10d",a[i]);//�������������������
           printf("\n");
           printf("����(Y/N)��:");//ѯ���û��Ƿ����
        while(getchar()!='\n')continue;//��������������ַ�
        ch=getchar();
        }while(ch=='Y'||ch=='y');//�û�ѡ��Y����y���������
}

