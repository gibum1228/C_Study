// 파일 복사
#include<stdio.h>
#include<stdlib.h>

#define USAGE "Usage: fcopy from to\n"
#define BUF_SIZE 1024
int main(int argc, char *argv[ ]) {

	FILE *fpi, *fpo;
	char buf[BUF_SIZE];
	size_t n;
	if (argc != 3)
		fprintf(stderr, "%s", USAGE), exit(1);
	if (!(fpi = fopen(argv[1], "rb")))
		fprintf(stderr, "%s: fail to open\n", argv[1]), exit(1);
	if (!(fpo = fopen(argv[2], "wb")))
		fprintf(stderr, "%s: fail to open\n", argv[2]), exit(1);
	while ((n = fread(buf, 1, BUF_SIZE, fpi)) > 0)
		if (fwrite(buf, 1, n, fpo) != n) break;
	
	if (ferror(fpi))
		fprintf(stderr, "%s: fail to read\n", argv[1]), exit(1);
	if (ferror(fpo))
		fprintf(stderr, "%s: fail to write\n", argv[2]), exit(1);

	fprintf(stderr, "copied: %s => %s\n", argv[1], argv[2]);
	fclose(fpi); fclose(fpo);
	return 0;
}
