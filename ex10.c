/*201814066 김기범
아이디와 패스워드 맞추기*/
#include<stdio.h>
#define OKAY 1
#define FAIL 2

const int super_id = 1357;
const int super_password = 4682;

int login(int id, int password);

int main()
{
	int i, p;

	printf("정수로 아이디(4) 비밀번호(4) 입력해주세요.\n");
	printf("ID:____\b\b\b\b");
	scanf("%d", &i);
	printf("PASSWORD:____\b\b\b\b");
	scanf("%d", &p);

	if (login(i, p) == OKAY)
		printf("로그인 성공\n");
	else
		printf("로그인 실패\n");

	return 0;
}

int login(int id, int password) {
	return (id == super_id && password == super_password) ? OKAY : FAIL;
}