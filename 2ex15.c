// 필드폭을 지정하여 입력받기
#include<stdio,h>

int main() {
	int a, b;

	print("5자리 정수 입력:");
	scanf("%3d %3d", &a, &b);
	// 최대 3문자씩 입력
	print("a = %d, b = %d\n", a, b);

	return 0;
}
