/*201814066 김기범
연봉 계산 프로그램*/
#include<stdio.h>
#define YEAR 12

int main()
{
	int m, y;

	printf("월급 입력(만원):");
	scanf("%d", &m);

	y = m * YEAR;

	printf("연봉(만원):%d\n", y);

	return 0;
}