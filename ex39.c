/*201814066 ����
�ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� ���α׷�*/
#include<stdio.h>

int main()
{
	char letter;

	while (1) {
		printf("�ҹ��ڸ� �Է��Ͻÿ�:");
		scanf("%c", &letter);

		if (letter == 'Q') break;
		if (letter<'a' || letter>'z') continue;

		letter = 'A' + (letter - 'a');
		printf("���ѵ� �빮�ڴ� %c�Դϴ�.\n", letter);
	}
	return 0;
}