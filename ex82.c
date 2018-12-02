//두 점 사이의 거리 구하기
#include<stdio.h>
#include<math.h>

int x_y(int x1, int y1, int x2, int y2);

int main() {
	int x1, y1, x2, y2, d;

	printf("좌표 입력(x1, y1):");
	scanf("%d %d", &x1, &y1);
	printf("좌표 입력(x2, y2):");
	scanf("%d %d", &x2, &y2);

	d = x_y(x1, y1, x2, y2);

	printf("두 점 사이의 거리: %d\n", d);

	return 0;
}

int x_y(int x1, int y1, int x2, int y2) {
	int xx, yy;
	xx = x1 - x2;
	yy = y1 - y2;

	return sqrt(xx*xx + yy*yy);
}