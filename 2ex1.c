// 이중 포인터

#include<stdio.h>

void set_pointer(char **q);

int main() {
	char *p;

	set_pointer(&p);
	printf("%s\n", p);

	return 0;
}

void set_pointer(char **q) {
	static char *proverb = "All that glisters is not gold.";
	*q = proverb;
}