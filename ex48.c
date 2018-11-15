/*201814066 김기범
반올림 함수 작성 프로그램*/
#include<stdio.h>
#include<math.h>

int int_round(double x);

int main()
{
	double x;

	printf("숫자 입력:");
	scanf("%lf", &x);
	printf("%d\n", int_round(x));

	return 0;
}

int int_round(double x) {
	return floor((double)x + 0.5);
}