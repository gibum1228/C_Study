/*201814066 ����
���ʺй� ������ sin �Լ� �ۼ� ���α׷�*/
#include<stdio.h>
#include<math.h>
#define PI 3.1415926535

double sin_degree(double y);

int main()
{
	double x, sin;

	scanf("%lf", &x);
	sin = sin_degree(x);

	printf("%f", sin);

	return 0;
}

double sin_degree(double y) {
	double z;
	return z = sin((PI*y) / 180.0);
}