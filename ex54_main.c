/*201814066 ����
���� �߻� ���α׷� main �ҽ�*/
#include<stdio.h>

unsigned random(void);
extern unsigned call_count;

int main()
{
	register int i;

	for (i = 0; i < 10; i++)
		printf("%d ", random());
	printf("\n");

	printf("�Լ��� ȣ��� Ƚ�� = %d\n", call_count);

	return 0;
}