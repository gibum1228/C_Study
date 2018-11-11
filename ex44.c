/*201814066 ����
�Լ��� �̿��� ���� ��� ���α׷�*/
#include<stdio.h>

int get_integer(void);
int combination(int n, int r);
int factorial(int n);

int main()
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("C(%d, %d)=%d\n", a, b, combination(a, b));

	return 0;
}

int combination(int n, int r) {
	return (factorial(n) / (factorial(n - r) * factorial(r)));
}

int get_integer(void) {
	int n;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	return n;
}

int factorial(int n) {
	int i, result = 1;
	for (i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}