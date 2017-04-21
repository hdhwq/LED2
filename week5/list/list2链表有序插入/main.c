#include "list.h"

//-------------ÓĞĞò²åÈë------------
int main()
{
	list_t *ahead = NULL;
//	list_t *bhead =NULL;

	int a;
	while(1)
	{
		printf("\n");
		printf("----number-----\n");
		scanf("%d",&a);	
		ahead = list_insert(ahead, a);
		printf("----list-----\n");
		list_display(ahead);
	}


#if 0
	printf("----blist----\n");
	bhead = list_insert_last(bhead,5);
	bhead = list_insert_last(bhead,2);
	bhead = list_insert_last(bhead,1);
	list_display(bhead);

	printf("---delete---\n");
	list_delete(ahead, 5);
	list_display(ahead);
#endif

	return 0;
}
