// È­¾¾ ¿Âµµ¸¦ ¼·¾¾ ¿Âµµ·Î ¹Ù²Ù±â
#include<stdio.h>

int main() {
	double f, c;

	printf("È­¾¾ ¿Âµµ ÀÔ·Â:");
	scanf("%lf", &f);

	c = 5.0 / 9.0 * (f - 32);

	printf("¼·¾¾ ¿Âµµ: %f\n", c);

	return 0;
}