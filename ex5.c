/*201814066 ����
���� ���� ���ϱ�*/
#include<stdio.h>
#define PI 3.14

int main() {
	double r, v;

	printf("���� ������:");
	scanf("%lf", &r);

	v = r * r * PI;

	printf("���� ����: %f\n", v);

	return 0;
}