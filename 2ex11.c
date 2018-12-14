// 비트 조작 매크로
#include <stdio.h>

#define BIT_GET(w, k)	(((w) >> (k)) & 0x01)
#define BIT_SET(w, k)	((w) | 0x01 << (k))
#define BIT_RESET(w, k)	((w) & ~(0x01 << (k)))

int main(void) {
	int data = 0;

	data = BIT_SET(data, 2);
	printf("%08X %d\n", data, BIT_GET(data, 2));

	data = BIT_RESET(data, 2);
	printf("%08X %d\n", data, BIT_GET(data, 2));

	return 0;
}