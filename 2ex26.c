// ���� �޸� �Ҵ� malloc() �Լ� (1)
#include<stdio.h>
#include<stdlib.h>

int main() {
	int *score; // ������ ����
	int i;

	score = (int *)malloc(10 * sizeof(int)); // �޸� �Ҵ��Ű��
	if (score == NULL) { // score�� ���� ������
		fprintf(stderr, "���� �޸� �Ҵ� ����\n"); // ���� �޼��� ���
		exit(1); // ���α׷� ����
	}

	for (i = 0; i < 10; i++) { 
		score[i] = i; // i ���� score�� �ֱ�
		printf("%d\n", score[i]); // score ���� �ϳ��� ���
	}

	free(score); // ���� �޸� ����

	return 0;
}