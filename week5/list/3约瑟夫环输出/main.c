#include "list.h"

int main()
{
	list_t *ahead = NULL;
	list_t *p = NULL;
	list_t *pre = NULL;
	list_t *pr = NULL;
	ahead = list_insert_last(ahead, 1);
	ahead = list_insert_last(ahead, 2);
	ahead = list_insert_last(ahead, 3);
	ahead = list_insert_last(ahead, 4);
	ahead = list_insert_last(ahead, 5);
	ahead = list_insert_last(ahead, 6);
	ahead = list_insert_last(ahead, 7);
	ahead = list_insert_last(ahead, 8);

	p = ahead;
	pre =p;
	pr = p;
	int cnt,i=1;
	printf("inset num for yuesefu: ");
	scanf("%d", &cnt);
	while(ahead->next!=ahead)
	{
		p = ahead;
		for(i; i<cnt; i++)
		{
			pre = p;
			p = p->next;
			pr = p->next;
		}
		i = 1;
		printf("%d\n", p->data);
		ahead = pr;
		pre->next = ahead;
		
	}
		list_display(ahead);
	return 0;
}






