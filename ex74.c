/*201814066 ±è±â¹ü
getchar(), putchar() ÇÔ¼ö*/
#include<stdio.h>

int main()
{
	int ch;

	while ((ch = getchar()) != EOF)
		putchar(ch);

	return 0;
}