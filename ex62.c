/*201814066 ����
��ǥ ���� ���α׷�*/
#include<stdio.h>
#define SIZE 11

int main()
{
	int freq[SIZE] = { 0 };
	int i, candidate;

	while (1) {
		printf("�ĺ��� ����(1~%d):", SIZE - 1);
		scanf("%d", &candidate);
		if (candidate <= 0 || candidate >= SIZE) break;
		freq[candidate]++;
	}
	printf("�� ��ǥ��\n");
	for (i = 1; i < SIZE; i++)
		printf("%3d %3d \n", i, freq[i]);

	return 0;
}