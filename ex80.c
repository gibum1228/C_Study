/*201814066 김기범
문자열 배열하기*/
#include<stdio.h>

int main()
{
	int i;
	char fruits[3][20];

	for (i = 0; i < 3; i++) {
		printf("과일 이름을 입력하시오:");
		scanf("%s", fruits[i]);
	}
	for (i = 0; i < 3; i++) {
		printf("%d번째 과일: %s\n", i, fruits[i]);
	}
	return 0;
}