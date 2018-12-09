#include<stdio.h>

typedef struct {
	int number;
	char name[20];
	double grade;
} Student;

Student LIST[] = {
	{20120001, "È«±æµ¿", 4.2},
	{20120002, "±èÃ¶¼ö", 3.2},
	{20120003, "±è¿µÈñ", 3.9}
};

int main() {
	Student *best = LIST;
	Student *p = LIST + 1;
	Student *end = LIST + (sizeof(LIST) / sizeof(LIST[0]));

	for (; p < end; p++)
		if (p->grade > best->grade)
			best = p;

	printf("¼ö¼®: %s, %d, %g\n", best->name, best->number, best->grade);

	return 0;
}