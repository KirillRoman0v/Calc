/*
 * File for declairing of functions and structures
 * for queue and stack realization
 *
 */

#include <stdlib.h>
#include "elem.h"

enum DYN_TYPE
{
	STACK,
	QUEUE
};

struct dynamic_struct
{
	int n;
	enum DYN_TYPE type;
	char *array;
};

int stack_init(struct dynamic_struct &stack); /* stack initialization */

int queue_init(struct dynamic_struct &queue); /* queue initialization */

int pop(struct elem a); /* function for adding an element to dynamic_struct */

struct elem stack_peek(struct dynamic_struct &stack); 
/* function for peeking of the last element from dynamic_struct */

struct elem stack_push(struct dynamic_struct &stack);
/* function that returning an last element from dynamic_struct and delete it */

struct elem queue_peek(struct dynamic_struct &queue);
/* function for peeking of the first element from dynamic_struct */

struct elem queue_push(struct dynamic_struct &queue);
/* function that returning a first element from dynamic_struct and delete it */