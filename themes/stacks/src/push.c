#include "stack.h"
#include <stdlib.h>

int push(t_stack *stack, int value)
{
	t_list *newnode;

	if (!(newnode = malloc(sizeof(t_list) * 1)))
		return (0);
	newnode->data = value;
	newnode->next = *stack;
	*stack = newnode;
	return (1);
}