/*201814066 ����
���� �߻� ���α׷� random �ҽ�*/
#define SEED 17
#define MULT 25173
#define INC 13849
#define MOD 65536

unsigned call_count = 0;
static unsigned seed = SEED;

unsigned random(void) {
	seed = (MULT*seed + INC) % MOD;
	call_count++;
	return seed;
}