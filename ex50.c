/*201814066 김기범
월급에 붙는 소득세를 계산하는 프로그램*/
#include<stdio.h>

int get_tax(int income);

int main()
{
	int m;

	printf("소득을 입력하시오(만원): ");
	scanf("%d", &m);

	printf("소득세는 %d만원입니다.\n", get_tax(m));

	return 0;
}

int get_tax(int income) {
	return income > 1000 ? (income*0.1) : (income*0.08);
}