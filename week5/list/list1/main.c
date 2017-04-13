#include "list.h"

int main()
{
	list_t *ahead = NULL;
//	list_display(ahead);
	list_t *bhead =NULL;
	ahead = list_insert(ahead, 5);
	ahead = list_insert(ahead, 2);
	ahead = list_insert(ahead, 1);
//	printf("%p\n", ahead);
	list_display(ahead);
	
	printf("----blist----\n");
	bhead = list_insert_last(bhead,5);
	bhead = list_insert_last(bhead,2);
	bhead = list_insert_last(bhead,1);
	list_display(bhead);

	printf("---delete---\n");
	list_delete(ahead, 5);
	list_display(ahead);

	return 0;
}
