// ����ü�� �̿��� ���簢���� ���̿� �ѷ� ���ϱ�
#include<stdio.h>

struct point { int x, y; };
struct rect { struct point p1, p2; };

int main() {
	struct rect r;
	int w, h, area, peri;

	printf("���� ��� ��ǥ �Է�(x, y):");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("������ �ϴ� ��ǥ �Է�(x, y):");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;
	area = w * h;
	peri = (w + h) * 2;
	
	printf("���̴� %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);

	return 0;
}