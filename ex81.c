/*201814066 ����
���� ����*/
#include<stdio.h>
#include<string.h>
#define ENTRIES 5

int main()
{
	int i;
	char dic[ENTRIES][2][30] = {
	{"book", "å"},
	{"boy", "�ҳ�"},
	{"computer", "��ǻ��"},
	{"language", "���"},
	{"rain", "��"}
	};
	char word[30];

	printf("�ܾ �Է��Ͻÿ�:");
	scanf("%s", word);
	for (i = 0; i < ENTRIES; i++) {
		if (!strcmp(dic[i][0], word)) {
			printf("%s: %s\n", word, dic[i][1]);
			return 0;
		}
	}

	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
	return 1;
}