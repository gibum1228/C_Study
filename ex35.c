//거듭 제곱 계산하기
#include<stdio.h>

int main() {
	int x, y, i, result = 1;

	printf("숫자 입력:");
	scanf("%d", &x);
	printf("지수 입력:");
	scanf("%d", &y);

	for (i = 0; i < y; i++) {
		result *= x;
	}

	printf("결과:%d\n", result);

	return 0;
}