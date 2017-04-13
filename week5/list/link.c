#include <stdio.h>

struct list
{
	int data;
	char sex;
	struct list *next;
};
int main()
{
	struct list a,b,c;
	a.data = 1;
	b.data = 2;	
	c.data = 3;
	a.next = &b;	
	b.next = &c;	
	c.next = NULL;
	struct list *head = &a;
	struct list d;
	d.data = 4;
	
	while(head!=NULL)
	{
		printf("data = %d\n",head->data);
		head=head->next;
	}
	

	return 0;
}	
