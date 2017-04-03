#ifndef __STRUCT_H__
#define __STRUCT_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define buff 20
#define N 3

typedef struct man
{
	char *name;
	int tik;
}man_t;


extern void man_vote(man_t *pman, int len, char *name);
man_t *man_init(int len);
void man_disp(man_t *pman, int len);
void man_desotry(man_t *pman,int len);

#endif
