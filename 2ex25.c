// 임의 접근(fseek)
#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int main(void) {
	FILE *fp;
	int table[SIZE], data, n;
	long pos;

	for (n = 0; n < SIZE; n++)
		table[n] = n * n;

	fp = fopen("sample.dat", "wb");
	fwrite(table, sizeof table, 1, fp);
	fclose(fp);
	fp = fopen("sample.dat", "rb");
	while (1) {
		printf("데이터 위치(0 ~ %d): ", SIZE - 1);
		scanf("%d", &n);
		if (n < 0 || n >= SIZE) break;
		pos = (long)(n * sizeof(int));
		if (fseek(fp, pos, SEEK_SET))
			fprintf(stderr, "fseek 실패\n"), exit(1);
		fread(&data, sizeof(int), 1, fp);
		printf("%d: %d\n", n, data);
	}
	fclose(fp);

	return 0;
}
