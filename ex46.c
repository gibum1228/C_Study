/*201814066 김기범
로또 번호 생성 프로그램*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 45

int main()
{
	int i;
	srand(time(NULL));
	for (i = 0; i < 6; i++)
		printf(" %d", 1 + rand() % MAX);
	printf("\n");

	return 0;
}