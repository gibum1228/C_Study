/*201814066 ����
�迭�� ����ؼ� ��� ���ϱ�*/
#include<stdio.h>
#define STUDENTS 5

int main()
{
	int grade[STUDENTS];
	int sum = 0, i, average;

	for (i = 0; i < STUDENTS; i++) {
		printf("�л����� ������ �Է��Ͻÿ�:");
		scanf("%d", &grade[i]);
	}

	for (i = 0; i < STUDENTS; i++)
		sum += grade[i];

	average = sum / STUDENTS;
	printf("���� ���= %d\n", average);
	
	return 0;
}
