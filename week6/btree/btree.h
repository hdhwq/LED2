#ifndef __BTREE_H__
#define __BTREE_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
}tree_t;


extern tree_t * tree_init();
extern void pre_order (tree_t *root);
extern void mid_order (tree_t *root);
extern void post_order (tree_t *root);
extern void entree(tree_t ** node, int value);


#endif

