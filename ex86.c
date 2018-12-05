// 포인트 멤버를 가지는 구조체
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
	struct student A = { 20180001, "홍길동", 4.3, &d };

	printf("학번: %d\n", A.number);
	printf("이름: %s\n", A.name);
	printf("학점: %g\n", A.grade);
	printf("생년월일: %d년 %d월 %d일\n", A.dob->year, A.dob->month, A.dob->day);

	return 0;
}