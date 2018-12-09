#include<stdio.h>

typedef struct { int x, y; } POINT;

POINT move( POINT p, POINT delta );

int main() {
	POINT p = { 2, 3 }, delta = { 10, 10 }, result;

	result = move(p, delta);
	printf("새로운 점의 좌표는 (%d, %d)입니다.\n", result.x, result.y);

	return 0;
}

POINT move(POINT p, POINT delta) {
	POINT new_p = { p.x + delta.x,p.y + delta.y };
	return new_p;
}