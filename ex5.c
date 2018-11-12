/*201814066 김기범
원의 면적 구하기*/
#include<stdio.h>
#define PI 3.14

int main() {
	double r, v;

	printf("원의 반지름:");
	scanf("%lf", &r);

	v = r * r * PI;

	printf("원의 면적: %f\n", v);

	return 0;
}