//�� �� ������ �Ÿ� ���ϱ�
#include<stdio.h>
#include<math.h>

int x_y(int x1, int y1, int x2, int y2);

int main() {
	int x1, y1, x2, y2, d;

	printf("��ǥ �Է�(x1, y1):");
	scanf("%d %d", &x1, &y1);
	printf("��ǥ �Է�(x2, y2):");
	scanf("%d %d", &x2, &y2);

	d = x_y(x1, y1, x2, y2);

	printf("�� �� ������ �Ÿ�: %d\n", d);

	return 0;
}

int x_y(int x1, int y1, int x2, int y2) {
	int xx, yy;
	xx = x1 - x2;
	yy = y1 - y2;

	return sqrt(xx*xx + yy*yy);
}