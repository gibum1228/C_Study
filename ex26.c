/*201814066 ����
switch���� Ȱ���� ���� ���α׷�*/
#include<stdio.h>

int main()
{
	char op;
	int x, y, result;

	printf("������ �Է��Ͻÿ�.\n");
	printf("(��: 2 + 5)\n");
	printf(">> ");
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		result = x + y; break;
	case '-':
		result = x - y; break;
	case '*':
		result = x * y; break;
	case '/':
		result = x / y; break;
	case '%':
		result = x % y; break;
	default:
		printf("�������� �ʴ� �������Դϴ�.\n");
		return 1;
	}

	printf("%d %c %d = %d\n", x, op, y, result);
	return 0;
}