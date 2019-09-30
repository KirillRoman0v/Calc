/*
 * File for declairing of functions and structures
 * for queue and stack realization
 *
 * queue_stack.h
 */

#include <stdlib.h>
#include "elem.h"

enum DYN_TYPE
{
	STACK,
	QUEUE
};

typedef struct dynamic_struct
{
	int n;
	enum DYN_TYPE type;
	elem *array;
} dynamic_struct;

int stack_init(dynamic_struct * stack); /* stack initialization */

int queue_init(dynamic_struct * queue); /* queue initialization */

int pop(elem a); /* function for adding an element to dynamic_struct */

elem stack_peek(dynamic_struct * stack); 
/* function for peeking of the last element from dynamic_struct */

elem queue_peek(dynamic_struct * queue);
/* function for peeking of the first element from dynamic_struct */

elem stack_push(dynamic_struct * stack);
/* function that returning an last element from dynamic_struct and delete it */

elem queue_push(dynamic_struct * queue);
/* function that returning a first element from dynamic_struct and delete it */