//������ ���
#include<stdio.h>

void binary_print(int x);

int main() {
	int x;

	printf("���� �Է�:");
	scanf("%df", &x);

	binary_print(x);

	printf("\n");

	return 0;
}

void binary_print(int x) {
	if (x / 2) {
		binary_print(x / 2);
	}
	printf("%d", x % 2);
}