/*201814066 ����
�ִ����� ���ϱ� ���α׷�*/
#include<stdio.h>

int main()
{
	int x, y, r;

	printf("0���� ū �� ���� �Է�:");
	scanf("%d %d", &x, &y);

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ������� %d�Դϴ�.\n", x);

	return 0;
}