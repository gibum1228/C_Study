/*201814066 김기범
화씨온도를 섭씨온도로 바꾸는 프로그램*/
#include<stdio.h>

double f_to_c(double f);

int main()
{
	double f;

	printf("화씨 온도를 입력하시오:");
	scanf("%lf", &f);

	printf("섭씨 온도는 %f입니다.\n", f_to_c(f));

	return 0;
}

double f_to_c(double f)
{
	return 5.0 / 9.0 * (f - 32.0);
}