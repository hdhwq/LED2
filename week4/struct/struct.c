#include "struct.h"

man_t *man_init(int len)
{
	man_t *pa =(man_t *)malloc(sizeof(man_t)*len);
	memset(pa, 0, sizeof(man_t)*len);
	int i;
	char name[20];
	for(i=0; i<len; i++)
	{
		do{
		printf("input name  of man:");
		scanf("%s", name);
		if(name[0] == '\0')
			continue;
		pa[i].name = (char *)malloc(strlen(name)+1);
		strcpy(pa[i].name,name);
		break;
		}while(1);
	}

	return pa;
}


void man_vote(man_t *pman, int len, char *name)
{
	int i;
	man_t *item = pman;
	for(i=0;i<len;i++)
	{
		if(strcmp(item->name,name)==0)
		{
			item->tik++;
			break;
		}
		else{
			item++;
		}
	}
}

void man_disp(man_t *pman, int len)
{
	if(NULL == pman)
		return;
	int i;
	for(i=0; i<len; i++)
	{
		printf("%s : %d\n",pman[i].name, pman[i].tik);
	}
}


void man_desotry(man_t *pman, int len)
{
	if(NULL == pman)
		return;
	int i;
	for(i=0; i<len; i++)
	{
		free(pman[i].name);
		pman[i].name = NULL;
	}
	free(pman);
}





