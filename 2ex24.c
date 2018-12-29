// 이진 데이터 입출력
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
typedef struct {
	int number;		char name[20];
	double gpa;
} Student;

int main(void) {
	Student table[SIZE] = {
		{ 1, "Kim", 3.99 },
	{ 2, "Min", 2.68 },
	{ 3, "Lee", 4.01 }
	};
	Student s;
	FILE *fp;
	int i;
	if (!(fp = fopen("student.dat", "wb")))
		fprintf(stderr, "출력 파일 열기 실패\n"), exit(1);
	if (fwrite(table, sizeof(Student), SIZE, fp) != SIZE)
		fprintf(stderr, "파일 출력 실패\n"), exit(1);
	fclose(fp);

	if (!(fp = fopen("student.dat", "rb")))
		fprintf(stderr, "입력 파일 열기 실패\n"), exit(1);
	for (i = 0; i < SIZE; i++) {
		if (fread(&s, sizeof s, 1, fp) != 1)
			fprintf(stderr, "파일 입력 실패\n"), exit(1);
		printf("%d, %s, %g\n", s.number, s.name, s.gpa);
	}

	fclose(fp); return 0;
}
