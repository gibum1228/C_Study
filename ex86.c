// ����Ʈ ����� ������ ����ü
#include<stdio.h>

struct date { int month, day, year; };
struct student {
	int number;
	char name[20];
	double grade;
	struct date *dob;
};

int main() {
	struct date d = { 12, 28, 1999 };
	struct student A = { 20180001, "ȫ�浿", 4.3, &d };

	printf("�й�: %d\n", A.number);
	printf("�̸�: %s\n", A.name);
	printf("����: %g\n", A.grade);
	printf("�������: %d�� %d�� %d��\n", A.dob->year, A.dob->month, A.dob->day);

	return 0;
}