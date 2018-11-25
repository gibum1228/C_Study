// 다차원 배열 예제
#include <stdio.h>

#define CLASSEX 3
#define STUDENTS 5

int main(void) {
	int s[CLASSEX][STUDENTS] = {
		{ 0, 1, 2, 3, 4 },
	{ 10, 11, 12, 13, 14 },
	{ 20, 21, 22, 23, 24 },
	};
	int clas, student, subtotal, total = 0;

	for (clas = 0; clas < CLASSEX; clas++) {
		subtotal = 0;
		for (student = 0; student < STUDENTS; student++)
			subtotal += s[clas][student];
		printf("학급 %d의 평균 성적 = %d\n", clas, subtotal / STUDENTS);
		total += subtotal;
	}
	printf("전체 학생들의 평균 성적 = %d\n", total / (CLASSEX * STUDENTS));

	return 0;
}
