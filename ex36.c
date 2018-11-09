/*201814066 김기범
7-13 문제 해결하기(순열)*/
#include<stdio.h>

int main()
{
	int i, n, r, result;

	printf("n의 값:");
	scanf("%d", &n);

	printf("r의 값:");
	scanf("%d", &r);

	for (i = n; i >= (n - r + 1); i--)
		result = result * i;
	printf("순열의 값은 %d입니다.", result);

	return 0;
}