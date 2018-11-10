/*201814066 김기범
break문이 있는 제곱근 계산 프로그램*/
#include<stdio.h>
#include<math.h>

int main()
{
	double v;

	while (1)
	{
		printf("실수 값을 입력하시오:");
		scanf("%lf", &v);

		if (v < 0.0)
			break;
		printf("%f의 제곱근은 %f\n", v, sqrt(v));
	}
	return 0;
}