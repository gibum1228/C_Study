/*201814066 ����
����ü ������ ����*/
#include<stdio.h>

struct vector { float x, y; };

void vector_input(struct vector *p);
void vector_output(struct vector *p);

int main()
{
	struct vector v;
	vector_input(&v);
	vector_output(&v);

	return 0;
}

void vector_input(struct vector *p) {
	printf("���� �Է�:");
	scanf("%f %f", &p->x, &p->y);
}

void vector_output(struct vector *p) {
	printf("(%g, %g)\n", p->x, p->y);
}