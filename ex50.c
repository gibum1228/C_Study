/*201814066 ����
���޿� �ٴ� �ҵ漼�� ����ϴ� ���α׷�*/
#include<stdio.h>

int get_tax(int income);

int main()
{
	int m;

	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf("%d", &m);

	printf("�ҵ漼�� %d�����Դϴ�.\n", get_tax(m));

	return 0;
}

int get_tax(int income) {
	return income > 1000 ? (income*0.1) : (income*0.08);
}