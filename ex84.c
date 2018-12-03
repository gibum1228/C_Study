// 구조체 배열 입출력
#include<stdio.h>

#define SIZE 3

struct students {
	char name[20];
	double grade;
	int number;
};

int main() {
	struct students list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("학번 입력:");
		scanf("%d", &list[i].number);
		printf("이름 입력:");
		scanf("%s", list[i].name);
		printf("성적 입력:");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++) {
		printf("학번:%d, 이름:%s, 성적:%f\n", list[i].number, list[i].name, list[i].grade);
	}

	return 0;
}