// ����ü �迭 �����
#include<stdio.h>

#define SIZE 3

struct students {
	char name[20];
	double grade;
	int number;
};

int main() {
	struct students list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("�й� �Է�:");
		scanf("%d", &list[i].number);
		printf("�̸� �Է�:");
		scanf("%s", list[i].name);
		printf("���� �Է�:");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++) {
		printf("�й�:%d, �̸�:%s, ����:%f\n", list[i].number, list[i].name, list[i].grade);
	}

	return 0;
}