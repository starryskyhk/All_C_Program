/*�����������Ա�ṹ��ʹ�ýṹ��*/
#include<stdio.h>
#include<stdlib.h>
struct  student
{
	char number[21];//����ѧ��
	char name[31];//��������
	unsigned count;//�γ�����
	double average;//����ƽ���ɼ�
	double score[];//�����������Ա�洢�γ̳ɼ�

};
/*���ô��������ͺ����ĳ�Աֵ*/
void set_student(struct student *p_stu, unsigned n)
{
	p_stu->count = n;//��n��ֵ�����ṹ���еĳ�Աcount 
	p_stu->average = 0;//��ṹ����ƽ���ɼ���ʼ��Ϊ0
	printf("������ѧ����������");
	gets(p_stu->name);//����ѧ������

	printf("������ѧ����ѧ��:");

	gets(p_stu->number);//����ѧ��ѧ��

	int i;
	for (i = 0; i < p_stu->count; i++)
	{
		printf("������ѧ���ĵ�%d�ųɼ���", i + 1);
		scanf("%lf", &p_stu->score[i]);//����ÿ�ſγ̵ĳɼ�
		p_stu->average += p_stu->score[i];//����Щ�ɼ����
	}
	p_stu->average /= p_stu->count;//Ȼ�����ƽ��ֵ
}
/*��ӡ���������ͺ�������Ա��ֵ*/
void show_student(const struct student *p_stu)
{
	int i;
	printf("%s��%d�ųɼ���", p_stu->name, p_stu->count);
	for (i = 0; i < p_stu->count; i++)
		printf("%8.2f", p_stu->score[i]);

	printf("\n%s��ƽ���ɼ�Ϊ��%f", p_stu->name, p_stu->average);//��ӡ��ѧ���ĳɼ���ƽ���ɼ�
}
int main()
{
	struct student *p_stu1;//����ָ���͵Ľṹ��
	p_stu1 = (struct student *)malloc(sizeof(struct student) + 3 * sizeof(double));//Ϊ�ṹ���������������洢�ռ�

	set_student(p_stu1, 5);
	show_student(p_stu1);
	free(p_stu1);//�ͷſռ�
	while (getchar() != '\n')
		continue;//����������Ŀո�
	return 0;
}
