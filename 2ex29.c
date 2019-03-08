// �޸� ���Ҵ� �Լ� realloc()
#include<stdio.h>
#include<stdlib.h>

int *input(int *p_count);

int main(void) {
	int *list, *p, end, count, sum;

	list = input(&count); // �Լ� ȣ��
	if (count < 1) { // count�� 1���� ������
		fprintf(stderr, "no data"); // ������ ���� ���
		free(list);
		exit(1);
	}

	p = list; end = p + count; sum = 0;
	do { sum += *p; } while (++p < end); // ���� ���ϱ�

	printf("average = %g\n", (double)sum / count); // ���տ� Ƚ���� ���� ��� ���ϱ�
	free(list); // �޸� ����

	return 0;
}

int *input(int *p_count) {
	enum { INCR_SIZE = 100 }; // ������
	int *list = NULL, *p, size = 0, count = 0, score;

	while(scanf("%d", &score) == 1){ // �Է� ������
		if (size <= count) { // size�� count���� �۰ų� ������
			size += INCR_SIZE; // 100�� �޸� �߰�
			if (!(p = realloc(list, size * sizeof(int)))) { // �޸� �Ҵ���� ������ ���� �޼��� ���
				fprintf(stderr, "out of memory\n");
				free(list), exit(1);
			}
			list = p; // list�� p�� ����Ű�� �ؼ� �޸� �޾ƿ���?
		}
		list[count++] = score; // list�� �Է� �޾Ҵ� score ���� ����
	}
	*p_count = count; // count�� �����ϱ� ���ؼ�

	return list; // �����͸� ��� �ִ� list ��ȯ
}