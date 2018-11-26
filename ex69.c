/*201814066 김기범
간접 참조 연산자와 증감 연산자*/
#include<stdio.h>

int main() {
	int i = 10;
	int *pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++;
	printf("i = %d, pi = %p\n", i, pi);

	printf("i = %d, pi = %p\n", i, pi);
	*pi++;
	printf("i = %d, pi = %p\n", i, pi);

	return 0;
}