// 정수의 5칙 연산
#include<stdio.h>

int main()
{
	int x, y;
	char op;
	
	printf("수식을 입력해주세요\n");
	printf("ex) 2 + 5\n");
	printf(">>> ");
	
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		printf("결과: %d\n", x + y);
		break;
	case '-':
		printf("결과: %d\n", x - y);
		break;
	case '*':
		printf("결과: %d\n", x * y);
		break;
	case '/':
		printf("결과: %d\n", x / y);
		break;
	case '%':
		printf("결과: %d\n", x % y);
		break;
	default:
		printf("연산자가 존재하지 않습니다.\n");
		return 1;
	}

	return 0;
}