/*201814066 ����
���̵�� �н����� ���߱�*/
#include<stdio.h>
#define OKAY 1
#define FAIL 2

const int super_id = 1357;
const int super_password = 4682;

int login(int id, int password);

int main()
{
	int i, p;

	printf("������ ���̵�(4) ��й�ȣ(4) �Է����ּ���.\n");
	printf("ID:____\b\b\b\b");
	scanf("%d", &i);
	printf("PASSWORD:____\b\b\b\b");
	scanf("%d", &p);

	if (login(i, p) == OKAY)
		printf("�α��� ����\n");
	else
		printf("�α��� ����\n");

	return 0;
}

int login(int id, int password) {
	return (id == super_id && password == super_password) ? OKAY : FAIL;
}