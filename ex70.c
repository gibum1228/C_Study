/*201814066 김기범
배열을 포인터처럼 사용하기*/
#include<stdio.h>

int main()
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("a = %u\n", (unsigned)a);
	printf("a + 1 = %u\n", (unsigned)(a + 1));
	printf("a = %d\n", *a);
	printf("*(a + 1) = %d\n", *(a + 1));

	return 0;
}