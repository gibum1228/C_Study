/*201814066 ����
7-13 ���� �ذ��ϱ�(����)*/
#include<stdio.h>

int main()
{
	int i, n, r, result;

	printf("n�� ��:");
	scanf("%d", &n);

	printf("r�� ��:");
	scanf("%d", &r);

	for (i = n; i >= (n - r + 1); i--)
		result = result * i;
	printf("������ ���� %d�Դϴ�.", result);

	return 0;
}