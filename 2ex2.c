// ���ڿ� �迭(����Ʈ)

#include<stdio.h>

int main() {
	char *fruit[] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};
	int i, n = sizeof fruit / sizeof fruit[0];

	for (i = 0; i < n; i++) {
		printf("%s\n", fruit[i]);
	}

	return 0;
}