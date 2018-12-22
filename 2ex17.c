// scanf 반환 값
#include<stdio.h>

int main(void) {
	int x, y, z;

	if (scanf("%d %d %d", &x, &y, &z) == 3)
		print("정수들의 합 = %d\n", x + y + z);
	else
		print("입력 오류\n");

	return 0;
}