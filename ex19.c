// �ִ� ���ϱ�
#include<stdio.h>

int main() {
	int a, b, result;

	printf("�� ���� �Է�:");
	scanf("%d %d", &a, &b);

	result = (a > b) ? a : b;

	printf("%d��(��) %d �� �ִ��� %d�Դϴ�.\n", a, b, result);

	return 0;
}