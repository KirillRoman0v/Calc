/* queue_stack */

#include "queue_stack.h"
#include <stdlib.h>

int stack_init(dynamic_struct * stack) /* stack initialization */
{
	elem *a = NULL;
	(*stack).n = 0;
	(*stack).type = STACK;
	(*stack).array = a;
	return 0;
}

int queue_init(dynamic_struct * queue) /* queue initialization */
{
	elem *a = NULL;
	(*queue).n = 0;
	(*queue).type = QUEUE;
	(*queue).array = a;
	return 0;
}
/*
int pop(elem a) * function for adding an element to dynamic_struct *
{

}
elem stack_peek(dynamic_struct * stack)
* function for peeking of the last element from dynamic_struct *
{

}
elem queue_peek(dynamic_struct * queue)
* function for peeking of the first element from dynamic_struct *
{

}
elem stack_push(dynamic_struct * stack)
* function that returning an last element from dynamic_struct and delete it *
{

}
elem queue_push(dynamic_struct * queue)
* function that returning a first element from dynamic_struct and delete it *
{

}
*/