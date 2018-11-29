/*201814066 김기범
문자열 입출력하기*/
#include<stdio.h>

int main()
{
	char name[100], address[100];

	printf("이름을 입력하시오:"); gets(name);
	printf("주소를 입력하시오:"); gets(address);

	puts(name); puts(address);

	return 0;
}