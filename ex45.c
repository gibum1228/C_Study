/*201814066 ����
�Լ��� �̿��� �Ҽ� �Ǵ� ���α׷�*/
#include<stdio.h>

int main()
{
	int is_prime(unsigned n);
	unsigned n;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);

	if (is_prime(n))
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);

	return 0;
}

int is_prime(unsigned n) {
	int i, n2;

	if (n < 2) return 0;
	
	for (n2 = n / 2, i = 2; i <= n2; i++)
		if (n % i == 0)
			return 0;

	return 1;
}