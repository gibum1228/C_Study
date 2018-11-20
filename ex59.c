//피보나치 수열 순환 사용
#include<stdio.h>

unsigned fib(unsigned n);

int main() {
	unsigned n;

	printf("숫자 입력:");
	scanf("%d", &n);

	printf("결과: %d\n", fib(n));

	return 0;
}

unsigned fib(unsigned n) {
	if (n < 2) {
		return n;
	}
	return fib(n - 2) + fib(n - 1);
}