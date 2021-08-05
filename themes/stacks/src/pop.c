#include "stack.h"
#include "functions.h"
#include <stdlib.h>

int pop(t_stack *stack)
{
	int result;
	t_list *tmp;

	if (*stack == 0)
		return (INT_MIN);
	result = (*stack)->data;
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
	return (result);
}