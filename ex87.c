/*201814066 ����
����ü ���ڿ� ����ü ��ȯ*/
#include<stdio.h>

struct vector { float x, y; };

struct vector get_vector_sum(struct vector a, struct vector b);

int main()
{
	struct vector a = { 2.0F, 3.0F }, b = { 5.0F, 6.0F }, sum;
	sum = get_vector_sum(a, b);
	
	printf("������ ���� (%f, %f)�Դϴ�.\n", sum.x, sum.y);

	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b) {
	struct vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return result;
}