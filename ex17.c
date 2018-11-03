// ¼·¾¾ ¿Âµµ¸¦ È­¾¾ ¿Âµµ·Î ¹Ù²Ù±â
#include<stdio.h>

int main() {
	double c, f;

	printf("¼·¾¾ ¿Âµµ ÀÔ·Â:");
	scanf("%lf", &c);

	f = (9.0 / 5.0) * c + 32;

	printf("È­¾¾ ¿Âµµ: %f\n", f);

	return 0;
}