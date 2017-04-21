#include "stack.h"

stack_t *stack_init()

{
	stack_t *stack= (stack_t *)malloc(sizeof(stack_t));
	
	return stack;
}


void enqueue(queue_t *queue, int value)
{
	if(queue==NULL)
		return;

	node_t *newnode = (node_t *)malloc(sizeof (node_t));
	newnode->data = value;
	newnode->next =NULL;

	if(queue->front==NULL && queue->rear==NULL)
	{
		queue->front = newnode;
		queue->rear = newnode;	
	}
	else
	{
		queue->rear->next = newnode;
		queue->rear =newnode;
	}

}

int dequeue(queue_t *queue)
{
	if(queue==NULL)
		return -999;
	if(queue->front==NULL && queue->rear==NULL)
		return -999;
	node_t *tmp;
	tmp = queue->front;
	queue->front = queue->front->next;
	if(queue->front == NULL)
		queue->rear =NULL;
	int v = tmp->data;
	free(tmp);
	return v;
}
















