/*201814066 ����
���� ��� ��� ���α׷� #2*/
#include<stdio.h>

int main()
{
	int grade, n = 0, sum = 0;

	while (printf("������ �Է��Ͻÿ�:"), scanf("%d", &grade) == 1)
	{
		sum += grade;
		n++;
	}
	printf("������ ����� %g�Դϴ�.\n", (double)sum / n);

	return 0;
}