//1���� ���ڸ� ���� �Է� ���� ���ں��� ũ�ų� �������� ���������� ���� ���� ����ϴ� ���α׷�
#include<stdio.h>

int main()
{
	int input, sum = 1, total = 0;

	scanf("%d", &input);

	while (total < input) {
		total += sum;
		sum++;
	}
	sum--;
	printf("%d", sum);

	return 0;
}