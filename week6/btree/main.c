#include "btree.h"

int main()
{
	tree_t * root1 = tree_init();
	entree(&root1,50);
	entree(&root1,60);
	entree(&root1,120);
	entree(&root1,400);
	printf("mid_order :\n");
	mid_order(root1);
	printf("pre_order :\n");
	pre_order(root1);
	printf("post_order :\n");
	post_order(root1);

	return 0;
}
