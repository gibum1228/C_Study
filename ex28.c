/*201814066 김기범
최솟값 구하기 프로그램*/
#include<stdio.h>
#include<limits.h>

int main()
{
	int number, min_value = INT_MAX;

	printf("정수를 입력하시오.\n종료는 Ctrl+z\n");
	while (scanf("%d", &number) != EOF)
		if (number < min_value)
			min_value = number;

	printf("최솟값은 %d\n", min_value);
	return 0;
}