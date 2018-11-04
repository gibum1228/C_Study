/*201814066 김기범
정수 부호 판단 프로그램*/
#include<stdio.h>

int main()
{
	int x;

	printf("정수 입력:");
	scanf("%d", &x);

	x > 0 ? printf("부호:+\n") : x < 0 ? printf("부호:-\n") : printf("0\n");

	return 0;
}