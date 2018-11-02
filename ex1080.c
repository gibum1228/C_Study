//1부터 숫자를 더해 입력 받은 숫자보다 크거나 같아지면 마지막으로 더한 값을 출력하는 프로그램
#include<stdio.h>

int main()
{
	int input, sum = 1, total = 0;

	scanf("%d", &input);

	while (total < input) {
		total += sum;
		sum++;
	}
	sum--;
	printf("%d", sum);

	return 0;
}