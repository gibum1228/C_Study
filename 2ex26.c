// 동적 메모리 할당 malloc() 함수 (1)
#include<stdio.h>
#include<stdlib.h>

int main() {
	int *score; // 포인터 변수
	int i;

	score = (int *)malloc(10 * sizeof(int)); // 메모리 할당시키기
	if (score == NULL) { // score가 값이 없으면
		fprintf(stderr, "동적 메모리 할당 오류\n"); // 에러 메세지 출력
		exit(1); // 프로그램 종료
	}

	for (i = 0; i < 10; i++) { 
		score[i] = i; // i 값을 score에 넣기
		printf("%d\n", score[i]); // score 값을 하나씩 출력
	}

	free(score); // 동적 메모리 해제

	return 0;
}