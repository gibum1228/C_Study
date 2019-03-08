// 메모리 재할당 함수 realloc()
#include<stdio.h>
#include<stdlib.h>

int *input(int *p_count);

int main(void) {
	int *list, *p, end, count, sum;

	list = input(&count); // 함수 호출
	if (count < 1) { // count가 1보다 작으면
		fprintf(stderr, "no data"); // 데이터 없음 출력
		free(list);
		exit(1);
	}

	p = list; end = p + count; sum = 0;
	do { sum += *p; } while (++p < end); // 총합 구하기

	printf("average = %g\n", (double)sum / count); // 총합에 횟수를 나눠 평균 구하기
	free(list); // 메모리 해제

	return 0;
}

int *input(int *p_count) {
	enum { INCR_SIZE = 100 }; // 열거형
	int *list = NULL, *p, size = 0, count = 0, score;

	while(scanf("%d", &score) == 1){ // 입력 성공시
		if (size <= count) { // size가 count보다 작거나 같으면
			size += INCR_SIZE; // 100씩 메모리 추가
			if (!(p = realloc(list, size * sizeof(int)))) { // 메모리 할당되지 않으면 에러 메세지 출력
				fprintf(stderr, "out of memory\n");
				free(list), exit(1);
			}
			list = p; // list가 p를 가리키게 해서 메모리 받아오기?
		}
		list[count++] = score; // list에 입력 받았던 score 값을 저장
	}
	*p_count = count; // count를 유지하기 위해서

	return list; // 데이터를 담고 있는 list 반환
}