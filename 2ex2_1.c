// 배열 포인터

#include<stdio.h>

void f(int(*pa)[4]);

int main() {
	int a[2][4] = { {1,2,3,4},{5,6,7,8} };
	int(*pa)[4] = a;

	printf("%d %d\n", (*pa)[2], pa[0][2]);
	printf("%d %d\n", (*(pa + 1))[2], pa[1][2]);

	f(a);

	return 0;
}

void f(int(*pa)[4]) {
	printf("%d %d\n", (*pa)[2], pa[0][2]);
	printf("%d %d\n", (*(pa + 1))[2], pa[1][2]);
}