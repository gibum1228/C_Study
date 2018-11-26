/*201814066 김기범
밑이 2인 로그 함수*/
#include<stdio.h>
#include<math.h>

double log2(double x);

int main()
{
	double x;

	printf("x 값 입력:");
	scanf("%lf", &x);

	printf("변환값: %f\n", log2(x));

	return 0;
}

double log2(double x) {
	return log(x) / log(2);
}