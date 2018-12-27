#include <stdio.h>

typedef struct {
	int number;
	char name[20];
	float score;
} Student;

int main(void) {
	FILE *fp;
	char fname[100];
	int count = 0;
	float total = 0.0F;
	Student s;

	printf("���� ����: ");
	scanf("%s", fname);
	if (!(fp = fopen(fname, "w")))
		return fprintf(stderr, "%s: ���� ����\n", fname), 1;
	while (1) {
		printf("�й�, �̸�, ���� �Է�: ");
		if (scanf("%d %s %f", &s.number, s.name, &s.score) != 3) break;
		fprintf(fp, "%d %s %g\n", s.number, s.name, s.score);
	}
	fclose(fp);

	if (!(fp = fopen(fname, "r")))
		return fprintf(stderr, "%s: ���� ����\n", fname), 1;
	while (fscanf(fp, "%d %s %f", &s.number, s.name, &s.score) == 3)
		total += s.score, count++;

	printf("��� = %g\n", total / count);
	fclose(fp);
	return 0;
}