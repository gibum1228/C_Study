/*201814066 ����
���ڿ� �迭�ϱ�*/
#include<stdio.h>

int main()
{
	int i;
	char fruits[3][20];

	for (i = 0; i < 3; i++) {
		printf("���� �̸��� �Է��Ͻÿ�:");
		scanf("%s", fruits[i]);
	}
	for (i = 0; i < 3; i++) {
		printf("%d��° ����: %s\n", i, fruits[i]);
	}
	return 0;
}