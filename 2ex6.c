// 201814066 ����
#include <stdio.h>

int main(int argc, char **argv) {
	while (*++argv)
		printf("%s ", *argv);
	putchar('\n');
	return 0;
}
