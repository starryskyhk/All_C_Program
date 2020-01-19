/*伸缩型数组成员结构，使用结构体*/
#include<stdio.h>
#include<stdlib.h>
struct  student
{
	char number[21];//定义学号
	char name[31];//定义姓名
	unsigned count;//课程门数
	double average;//定义平均成绩
	double score[];//伸缩型数组成员存储课程成绩

};
/*设置带有伸缩型函数的成员值*/
void set_student(struct student *p_stu, unsigned n)
{
	p_stu->count = n;//将n的值付给结构体中的成员count 
	p_stu->average = 0;//令结构体中平均成绩初始化为0
	printf("请输入学生的姓名：");
	gets(p_stu->name);//输入学生姓名

	printf("请输入学生的学号:");

	gets(p_stu->number);//输入学生学号

	int i;
	for (i = 0; i < p_stu->count; i++)
	{
		printf("请输入学生的第%d门成绩：", i + 1);
		scanf("%lf", &p_stu->score[i]);//输入每门课程的成绩
		p_stu->average += p_stu->score[i];//将这些成绩求和
	}
	p_stu->average /= p_stu->count;//然后求出平均值
}
/*打印带有伸缩型函数各成员的值*/
void show_student(const struct student *p_stu)
{
	int i;
	printf("%s的%d门成绩：", p_stu->name, p_stu->count);
	for (i = 0; i < p_stu->count; i++)
		printf("%8.2f", p_stu->score[i]);

	printf("\n%s的平均成绩为：%f", p_stu->name, p_stu->average);//打印出学生的成绩和平均成绩
}
int main()
{
	struct student *p_stu1;//定义指针型的结构体
	p_stu1 = (struct student *)malloc(sizeof(struct student) + 3 * sizeof(double));//为结构和伸缩型数组分配存储空间

	set_student(p_stu1, 5);
	show_student(p_stu1);
	free(p_stu1);//释放空间
	while (getchar() != '\n')
		continue;//清楚缓冲区的空格
	return 0;
}
