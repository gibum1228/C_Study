// ��Ƽ���͸� ���ͷ� �ٲٱ�
#include<stdio.h>

#define M 100

int main()
{
	int cm;

	printf("��Ƽ���� �Է�:");
	scanf("%d", &cm);

	printf("%dcm�� %dm %dcm �Դϴ�.\n", cm, cm / M, cm%M);

	return 0;
}