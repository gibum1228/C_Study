/*201814066 ����
���� 2�� �α� �Լ�*/
#include<stdio.h>
#include<math.h>

double log2(double x);

int main()
{
	double x;

	printf("x �� �Է�:");
	scanf("%lf", &x);

	printf("��ȯ��: %f\n", log2(x));

	return 0;
}

double log2(double x) {
	return log(x) / log(2);
}