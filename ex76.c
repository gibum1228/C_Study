/*201814066 김기범
대문자 변환하기*/
#include<stdio.h>
#include<ctype.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(toupper(c));

	return 0;
}