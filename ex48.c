/*201814066 ����
�ݿø� �Լ� �ۼ� ���α׷�*/
#include<stdio.h>
#include<math.h>

int int_round(double x);

int main()
{
	double x;

	printf("���� �Է�:");
	scanf("%lf", &x);
	printf("%d\n", int_round(x));

	return 0;
}

int int_round(double x) {
	return floor((double)x + 0.5);
}