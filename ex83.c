// 구조체를 이용해 직사각형의 넓이와 둘레 구하기
#include<stdio.h>

struct point { int x, y; };
struct rect { struct point p1, p2; };

int main() {
	struct rect r;
	int w, h, area, peri;

	printf("왼쪽 상단 좌표 입력(x, y):");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("오른쪽 하단 좌표 입력(x, y):");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;
	area = w * h;
	peri = (w + h) * 2;
	
	printf("넓이는 %d이고 둘레는 %d입니다.\n", area, peri);

	return 0;
}