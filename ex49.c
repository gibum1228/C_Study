/*201814066 ����
ȭ���µ��� �����µ��� �ٲٴ� ���α׷�*/
#include<stdio.h>

double f_to_c(double f);

int main()
{
	double f;

	printf("ȭ�� �µ��� �Է��Ͻÿ�:");
	scanf("%lf", &f);

	printf("���� �µ��� %f�Դϴ�.\n", f_to_c(f));

	return 0;
}

double f_to_c(double f)
{
	return 5.0 / 9.0 * (f - 32.0);
}