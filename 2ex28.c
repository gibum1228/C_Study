// �޸𸮸� �Ҵ��ų ��, 0���� �ʱ�ȭ��Ű�� calloc �Լ�
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int *table, size, total, i;

	size = 5 + rand() % 6; // size: [5, 10]
	if (!(table = (int *)calloc(size, sizeof(int)))) { // size * sizeof(int) ��ŭ�� �޸� �Ҵ�, �޸� �Ҵ緮�� ������ NULL ��ȯ
		fprintf(stderr, "out of memory\n"), exit(1); // ���� �޼��� ��� �� ���α׷� ����
	}

	for (i = 0; i < 1000; i++) {
		table[rand() % size]++; // 0~9 �� ���� ��ŭ +1 ���ֱ�
	}
	for (total = 0, i = 0; i < size; i++) {
		total += table[i]; // ���� ���� �� Ƚ���� total�� ����
		printf("%2d: %3d\n", i, table[i]); // 0 ~ 9 ���� ���� Ƚ�� ���
	}
	printf("\nsize = %d, total = %d", size, total); // ������� �� Ƚ�� ���

	free(table); // �޸� ����

	return 0;
	}