// 최댓값 구하기
#include<stdio.h>

int main() {
	int a, b, result;

	printf("두 정수 입력:");
	scanf("%d %d", &a, &b);

	result = (a > b) ? a : b;

	printf("%d와(과) %d 중 최댓값은 %d입니다.\n", a, b, result);

	return 0;
}