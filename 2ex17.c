// scanf ��ȯ ��
#include<stdio.h>

int main(void) {
	int x, y, z;

	if (scanf("%d %d %d", &x, &y, &z) == 3)
		print("�������� �� = %d\n", x + y + z);
	else
		print("�Է� ����\n");

	return 0;
}