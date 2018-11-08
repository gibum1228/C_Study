/*201814066 김기범
for문으로 팩토리얼 계산하는 프로그램*/
#include<stdio.h>

int main()
{
	long fact = 1;
	int i, n;

	printf("정수를 입력하시오:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact *= i;

	printf("%d!은 %ld입니다.\n", n, fact);

	return 0;
}