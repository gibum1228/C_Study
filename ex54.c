//난수 발생시키기
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rand_funtion(void);

int main() {
	int i, n;

	srand(time(NULL));

	printf("난수 발생 횟수 입력:");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("%d  ", rand_funtion());
	}

	printf("\n");

	return 0;
}

int rand_funtion(void) {
	return rand() % RAND_MAX + 1;
}