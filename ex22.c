//���� �Ǵ� ���α׷�
#include<stdio.h>

int main() {
	int y;

	printf("�⵵ �Է�:");
	scanf("%d", &y);

	if ((y & 4 == 0 && y % 100 != 0) || y % 400 == 0)
		printf("%d���� �����Դϴ�.\n", y);
	else
		printf("%d���� ������ �ƴմϴ�.\n", y);

	return 0;
}