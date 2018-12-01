/*201814066 김기범
문자 검사하기*/
#include<stdio.h>
#include<ctype.h>

int main()
{
	int c = 'A';

	printf("isdigit(%c) = %d\n", c, isdigit(c));
	printf("isalpha(%c) = %d\n", c, isalpha(c));
	printf("islower(%c) = %d\n", c, islower(c));
	printf("ispunct(%c) = %d\n", c, ispunct(c));
	printf("isxdigit(%c) = %d\n", c, isxdigit(c));
	printf("isprint(%c) = %d\n", c, isprint(c));

	return 0;
}