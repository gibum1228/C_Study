/*201814066 김기범
투표 집계 프로그램*/
#include<stdio.h>
#define SIZE 11

int main()
{
	int freq[SIZE] = { 0 };
	int i, candidate;

	while (1) {
		printf("후보자 선택(1~%d):", SIZE - 1);
		scanf("%d", &candidate);
		if (candidate <= 0 || candidate >= SIZE) break;
		freq[candidate]++;
	}
	printf("값 득표수\n");
	for (i = 1; i < SIZE; i++)
		printf("%3d %3d \n", i, freq[i]);

	return 0;
}