/*201814066 ����
0.0���� 1.0������ ������ ��ȯ�ϴ� ���α׷�*/
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