/*201814066 김기범
달의 일수를 계산하는 프로그램*/
#include<stdio.h>

int main()
{
	int m, d;

	printf("달을 입력하시오:");
	scanf("%d", &m);

	switch (m) {
	case 2:
		d = 28;
		break;
	case 4: case 6: case 9: case 11:
		d = 30;
		break;
	default:
		d = 31;
		break;
	}

	printf("%d월의 일수는 %d입니다.\n", m, d);

	return 0;
}