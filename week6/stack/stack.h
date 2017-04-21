#ifndef __STACK_H_
#define __STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct list
{
	int data;
	struct list *next;
}list_t;

typedef struct stack 
{
	list_t *top;
}stack_t;

extern stack_t *stack_init();
extern void push (stack_t *stack, int value);
extern void pop (stack_t *stack);
extern int stack_empty(stack_t *stack);
extern int top(stack_t * stack);
extern int dstack (stack_t *stack);




#endif

