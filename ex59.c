//�Ǻ���ġ ���� ��ȯ ���
#include<stdio.h>

unsigned fib(unsigned n);

int main() {
	unsigned n;

	printf("���� �Է�:");
	scanf("%d", &n);

	printf("���: %d\n", fib(n));

	return 0;
}

unsigned fib(unsigned n) {
	if (n < 2) {
		return n;
	}
	return fib(n - 2) + fib(n - 1);
}