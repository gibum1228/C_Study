//하노이 타워
#include<stdio.h>

void hanoi_tower(int n, char from, char tmp, char to);

int main() {
	hanoi_tower(4, 'A', 'B', 'C');

	return 0;
}

void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1) {
		printf("원판 1: %c => %c\n", from, to);
	}
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("원판 %d: %c => %c\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}