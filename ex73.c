/*201814066 김기범
swap 함수 이용하기*/
#include<stdio.h>

void swap(int *px, int *py);

int main()
{
	int a = 100, b = 200;

	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);

	return 0;
}

void swap(int *px, int *py) {
	int tmp;
	printf("*px=%d *py=%d\n", *px, *py);
	tmp = *px; *px = *py; *py = tmp;
	printf("*px=%d *py=%d\n", *px, *py);
}