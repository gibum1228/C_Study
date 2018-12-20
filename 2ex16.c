// 문자 집합 입력
#include<stdio.h>

int main(void) {
	char s[80];

	print("문자열 입력:");
	scanf("%[abc]", s);

	print("입력된 문자열 = %s\n", s);

	return 0;
}