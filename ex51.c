/*201814066 김기범
0.0부터 1.0까지의 난수를 반환하는 프로그램*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double f_rand();

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
		printf("%f ", f_rand());
	printf("\n");
	return 0;
}

double f_rand() {
	return rand() / (double)RAND_MAX;
}