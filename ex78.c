/*201814066 김기범
문자열 처리하기*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char string[100];
	strcpy(string, "Hello world from ");
	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat! ");

	printf("string = %s\n", string);

	return 0;
}