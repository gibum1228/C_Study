// �ú��� �ٲٱ�
#include<stdio.h>
#define HOUR 3600
#define MIN 60

int main() {
	int h, m, s, si;

	printf("�� �Է�:");
	scanf("%d", &si);

	h = si / HOUR;
	m = si % HOUR / MIN;
	s = si % HOUR % MIN;

	printf("%d�ʴ� %d�� %d�� %d�� �Դϴ�.\n", si, h, m, s);

	return 0;
}