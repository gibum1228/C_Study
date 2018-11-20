/*201814066 김기범
난수 발생 프로그램 main 소스*/
#include<stdio.h>

unsigned random(void);
extern unsigned call_count;

int main()
{
	register int i;

	for (i = 0; i < 10; i++)
		printf("%d ", random());
	printf("\n");

	printf("함수가 호출된 횟수 = %d\n", call_count);

	return 0;
}