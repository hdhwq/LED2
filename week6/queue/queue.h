#ifndef __QUEUE_H_
#define __QUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node
{
	int data;
	struct node *next;
}node_t;

typedef struct queue
{
	node_t *front;
	node_t *rear;
}queue_t;

extern queue_t *queue_init();
extern void equeue (queue_t *queue, int value);
extern int dequeue (queue_t *queue);




#endif

