// 201814066 ±è±â¹ü
#include<stdio.h>

int main() {
	int m[3][4];
	int(*pa)[4] = m;
	int *p = m[0];

	printf("m = %p\n", m);				// int (*)[4]
	printf("m[0] = %p\n", m[0]);			// int *
	printf("m[1] = %p\n", m[1]);			// int *
	printf("&m[0][0] = %p\n", &m[0][0]);	// int *
	printf("&m[1][0] = %p\n", &m[1][0]);	// int *
	printf("pa = %p\n", pa);				// int (*)[4]
	printf("pa+1 = %p\n", pa + 1);			// int (*)[4]
	printf("p = %p\n", p);					// int *
	printf("p+1 = %p\n", p + 1);				// int *

	printf("sizeof m = %d\n", sizeof m);
	printf("sizeof m[0] = %d\n", sizeof m[0]);
	printf("sizeof *pa = %d\n", sizeof *pa);
	printf("sizeof *p = %d\n", sizeof *p);
	printf("sizeof pa[0] = %d\n", sizeof pa[0]);
	printf("sizeof p[0] = %d\n", sizeof p[0]);
	printf("sizeof pa = %d\n", sizeof pa);
	printf("sizeof p = %d\n", sizeof p);

	return 0;
}