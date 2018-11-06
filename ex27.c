/*201814066 김기범
성적 평균 계산 프로그램 #2*/
#include<stdio.h>

int main()
{
	int grade, n = 0, sum = 0;

	while (printf("성적을 입력하시오:"), scanf("%d", &grade) == 1)
	{
		sum += grade;
		n++;
	}
	printf("성적의 평균은 %g입니다.\n", (double)sum / n);

	return 0;
}