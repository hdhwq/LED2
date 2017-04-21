#include "btree.h"

tree_t * create(int value)
{ 
 tree_t	*p = (tree_t *)malloc(sizeof(tree_t));
	p->data =value;
//	printf("%d\n",(*p)->data);	
	p->right = NULL;
	p->left = NULL;
	return p;
}

tree_t * tree_init()
{
	tree_t * root = (tree_t *)malloc(sizeof(tree_t));
	root->data =100;
	root->left =NULL;
	root->right =NULL;
	return root;
}

void pre_order (tree_t *root)
{
	if(root!= NULL)	
	{
		printf("%d\n",root->data);
		pre_order(root->left);
		pre_order(root->right);
	}
}

void mid_order (tree_t *root)
{	
	if(root!= NULL)	
	{
		mid_order(root->left);
		printf("%d\n",root->data);
		mid_order(root->right);
	}

}

void post_order (tree_t *root)
{	
	if(root!= NULL)	
	{
		post_order(root->left);
		post_order(root->right);
		printf("%d\n",root->data);
	}
}

void entree(tree_t ** root, int value)
{
	tree_t **p = root;
	if((*p)==NULL)
	{
		(*p) = create(value);
		return ;
	}
	if(value>=(*p)->data)
	{
		entree(&((*p)->right),value);
	}		
	else
	{
		entree(&((*p)->left),value);
	}
}

