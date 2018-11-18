//조합의 수 출력
#include<stdio.h>

unsigned int combination(unsigned n, unsigned r);

int main() {
	unsigned n, r;

	printf("n 입력:");
	scanf("%d", &n);
	printf("r 입력:");
	scanf("%d", &r);

	printf("결과: %d", combination(n, r));

	printf("\n");

	return 0;
}

unsigned int combination(unsigned n, unsigned r) {
	if (r == 0 || r == n) {
		return 1;
	}
	return combination(n - 1, r) + combination(n - 1, r - 1);
}