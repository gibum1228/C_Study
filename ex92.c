#include<stdio.h>

enum days {SUM, MON, TUE, WED, THU, FRI, SAT};

char *days_name[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

int main() {
	enum days d = WED;

	printf("%d��° ������ %s�Դϴ�.\n", d, days_name[d]);

	return 0;
}