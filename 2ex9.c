// 비트 이동 연산자
#include <stdio.h>
int main(void)
{
	int x = 4;   				// 0100  

	printf("비트 << = %#010x\n", x << 1);	// 1000
	printf("비트 >> = %#010x\n", x >> 1);	// 0010

	return 0;
}
