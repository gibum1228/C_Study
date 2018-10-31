// 센티미터를 미터로 바꾸기
#include<stdio.h>

#define M 100

int main()
{
	int cm;

	printf("센티미터 입력:");
	scanf("%d", &cm);

	printf("%dcm는 %dm %dcm 입니다.\n", cm, cm / M, cm%M);

	return 0;
}