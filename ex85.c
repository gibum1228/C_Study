// -> ������
#include<stdio.h>

struct student{
	int number;
	char name[20];
	double grade;
};

int main() {
	struct student s = { 20180001, "ȫ�浿", 4.3 };
	struct student *p = &s;

	printf("�й�: %d, �̸�: %s, ����: %g\n", s.number, s.name, s.grade);
	printf("�й�: %d, �̸�: %s, ����: %g\n", (*p).number, (*p).name, (*p).grade);
	printf("�й�: %d, �̸�: %s, ����: %g\n", p->number, p->name, p->grade);

	return 0;
}