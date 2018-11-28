/*201814066 김기범
배열 역순 출력하기*/
#include<stdio.h>

void print_reverse(const int a[], int n);

int main() {
	int a[] = { 10, 20, 30, 40, 50 };
	print_reverse(a, sizeof(a) / sizeof(a[0]));
	
	return 0;
}

void print_reverse(const int a[], int n) {
	const int *p = a + n - 1;
	while (p >= a)
		printf("%d\n", *p--);
}