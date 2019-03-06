// ���� �޸� �Ҵ� malloc() �Լ� (3)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Book { // å ����ü
	int number;
	char title[20];
};

int main(void) {
	struct Book *p; // ����ü ������ p
	int i;

	if (!(p = (struct Book *)malloc(2 * sizeof(*p)))) {
		fprintf(stderr, "�޸� ����\n"), exit(1);
	}

	p->number = 1; // p.number ���� �ʱ�ȭ
	strcpy(p->title, "C Programming");  // ���ڿ� ���� > " " �ȿ� �ִ� ���� p.title�� ����

	(p + 1)->number = 2; // p[1].number ���� �ʱ�ȭ
	strcpy((p + 1)->title, "Data Structure"); // ���ڿ� ����

	for (i = 0; i < 2; i++) {
		printf("%d: %s\n", p[i].number, p[i].title); // ������ �ִ� ���� ���
	}

	free(p);

	return 0;
}