// 파일 문자열 입출력 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *fname = "proverb.txt";
	FILE *fp; int line_num = 0;
	char line[256], word[256];

	printf("탐색할 단어: "); scanf("%s", word);
	if (!(fp = fopen(fname, "r")))
		fprintf(stderr, "%s: 열기 실패\n", fname), exit(1);

	while (fgets(line, 256, fp)) {
		line_num++;
		if (strstr(line, word))
			printf("%s:%d -- %s 발견\n", fname, line_num, word);
	}
	fclose(fp); 
	return 0;
}