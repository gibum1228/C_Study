/*201814066 ����
������ ��� ���α׷�*/
#include<stdio.h>

int main()
{
	int i, y;
	double total, rate, investment;

	printf("����:"); scanf("%lf", &investment);
	printf("����(%%):"); scanf("%lf", &rate);
	printf("�Ⱓ(��):"); scanf("%d", &y);

	printf("======================\n");
	printf("����        ������\n");
	printf("======================\n");

	total = investment;
	rate /= 100.0;

	for (i = 0; i < y; i++) {
		total = total * (1 + rate);
		printf("%2d	%10.1f\n", i + 1, total);
	}
	return 0;
}