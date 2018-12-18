// 비트 필드 예제
#include <stdio.h>

struct product {
	unsigned style : 1;
	unsigned size : 2;
	int      value : 5;
};

int main(void) {
	struct product p;

	p.style = 1;
	p.size = 2;
	p.value = -10;

	printf("style = %u, size = %u, value = %d\n", p.style, p.size, p.value);
	printf("sizeof p = %d\n", sizeof p);
	printf("p = %08X\n", p);

	return 0;
}