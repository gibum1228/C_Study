// ������ 5Ģ ����
#include<stdio.h>

int main()
{
	int x, y;
	char op;
	
	printf("������ �Է����ּ���\n");
	printf("ex) 2 + 5\n");
	printf(">>> ");
	
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		printf("���: %d\n", x + y);
		break;
	case '-':
		printf("���: %d\n", x - y);
		break;
	case '*':
		printf("���: %d\n", x * y);
		break;
	case '/':
		printf("���: %d\n", x / y);
		break;
	case '%':
		printf("���: %d\n", x % y);
		break;
	default:
		printf("�����ڰ� �������� �ʽ��ϴ�.\n");
		return 1;
	}

	return 0;
}