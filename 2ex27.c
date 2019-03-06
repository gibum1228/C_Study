// 동적 메모리 할당 malloc() 함수 (3)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Book { // 책 구조체
	int number;
	char title[20];
};

int main(void) {
	struct Book *p; // 구조체 포인터 p
	int i;

	if (!(p = (struct Book *)malloc(2 * sizeof(*p)))) {
		fprintf(stderr, "메모리 부족\n"), exit(1);
	}

	p->number = 1; // p.number 값을 초기화
	strcpy(p->title, "C Programming");  // 문자열 복사 > " " 안에 있는 것을 p.title에 복사

	(p + 1)->number = 2; // p[1].number 값을 초기화
	strcpy((p + 1)->title, "Data Structure"); // 문자열 복사

	for (i = 0; i < 2; i++) {
		printf("%d: %s\n", p[i].number, p[i].title); // 가지고 있는 값을 출력
	}

	free(p);

	return 0;
}