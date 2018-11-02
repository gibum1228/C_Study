// 시분초 바꾸기
#include<stdio.h>
#define HOUR 3600
#define MIN 60

int main() {
	int h, m, s, si;

	printf("초 입력:");
	scanf("%d", &si);

	h = si / HOUR;
	m = si % HOUR / MIN;
	s = si % HOUR % MIN;

	printf("%d초는 %d시 %d분 %d초 입니다.\n", si, h, m, s);

	return 0;
}