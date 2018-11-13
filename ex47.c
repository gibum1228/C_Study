/*201814066 김기범
육십분법 단위의 sin 함수 작성 프로그램*/
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