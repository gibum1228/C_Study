/*201814066 ����
���� ��ȣ �Ǵ� ���α׷�*/
#include<stdio.h>

int main()
{
	int x;

	printf("���� �Է�:");
	scanf("%d", &x);

	x > 0 ? printf("��ȣ:+\n") : x < 0 ? printf("��ȣ:-\n") : printf("0\n");

	return 0;
}