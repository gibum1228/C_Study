/*201810466 ����
����ü ������ ��ȯ*/
#include<stdio.h>

struct vector { float x, y; };

struct vector *vector_input(struct vector *p);
void vector_output(struct vector *p);

int main()
{
	struct vector v;
	vector_output(vector_input(&v));
	
	return 0;
}

struct vector *vector_input(struct vector *p) {
	printf("���� �Է�:");
	scanf("%f %f", &p->x, &p->y);
	return p;
}

void vector_output(struct vector *p) {
	printf("(%g, %g)\n", p->x, p->y);
}