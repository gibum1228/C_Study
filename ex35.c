//�ŵ� ���� ����ϱ�
#include<stdio.h>

int main() {
	int x, y, i, result = 1;

	printf("���� �Է�:");
	scanf("%d", &x);
	printf("���� �Է�:");
	scanf("%d", &y);

	for (i = 0; i < y; i++) {
		result *= x;
	}

	printf("���:%d\n", result);

	return 0;
}