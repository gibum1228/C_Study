/*201814066 ����
�빮�� ��ȯ�ϱ�*/
#include<stdio.h>
#include<ctype.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(toupper(c));

	return 0;
}