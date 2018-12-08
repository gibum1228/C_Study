/*201814066 김기범
공용체 활용하기*/
#include<stdio.h>

#define INT 1
#define REAL 2
#define STR 3

struct s_var {
	char *name;
	int type;
	union {
		int ival;
		double rval;
		char *sval;
	} u;
};

void out_var(struct s_var *p);

int main()
{
	struct s_var v;

	v.name = "n"; v.type = INT; v.u.ival = 1; out_var(&v);

	v.name = "r"; v.type = REAL; v.u.rval = 3.4; out_var(&v);

	v.name = "s"; v.type = STR; v.u.sval = "C Language"; out_var(&v);

	return 0;
}

void out_var(struct s_var *p) {
	printf("%s: ", p->name);
	switch (p->type) {
	case INT:
		printf("INT, %d\n", p->u.ival); break;
	case REAL:
		printf("REAL, %g\n", p->u.rval); break;
	case STR
		:
		printf("STR, %s\n", p->u.sval); break;
	default:
		printf("unknown type\n");
	}
}