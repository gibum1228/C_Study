// 메모리를 할당시킬 때, 0으로 초기화시키는 calloc 함수
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int *table, size, total, i;

	size = 5 + rand() % 6; // size: [5, 10]
	if (!(table = (int *)calloc(size, sizeof(int)))) { // size * sizeof(int) 만큼의 메모리 할당, 메모리 할당량이 없으면 NULL 반환
		fprintf(stderr, "out of memory\n"), exit(1); // 에러 메세지 출력 후 프로그램 종료
	}

	for (i = 0; i < 1000; i++) {
		table[rand() % size]++; // 0~9 중 나온 만큼 +1 해주기
	}
	for (total = 0, i = 0; i < size; i++) {
		total += table[i]; // 나온 수의 총 횟수을 total에 저장
		printf("%2d: %3d\n", i, table[i]); // 0 ~ 9 별로 나온 횟수 출력
	}
	printf("\nsize = %d, total = %d", size, total); // 사이즈와 총 횟수 출력

	free(table); // 메모리 해제

	return 0;
	}