#ifndef __LIST_H_
#define __LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct list
{
	int data;
	struct list *next;
}list_t;

extern void list_display(list_t *head);
extern list_t *list_insert(list_t *head, int value);
extern list_t *list_insert_last(list_t *head, int value);
extern list_t *list_delete(list_t *head, list_t *pre, list_t *pos);





#endif

