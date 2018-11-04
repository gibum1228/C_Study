//윤년 판단 프로그램
#include<stdio.h>

int main() {
	int y;

	printf("년도 입력:");
	scanf("%d", &y);

	if ((y & 4 == 0 && y % 100 != 0) || y % 400 == 0)
		printf("%d년은 윤년입니다.\n", y);
	else
		printf("%d년은 윤년이 아닙니다.\n", y);

	return 0;
}