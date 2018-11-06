/*201814066 김기범
최대공약수 구하기 프로그램*/
#include<stdio.h>

int main()
{
	int x, y, r;

	printf("0보다 큰 두 정수 입력:");
	scanf("%d %d", &x, &y);

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("최대공약수는 %d입니다.\n", x);

	return 0;
}