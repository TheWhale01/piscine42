#include "vars.h"
#include <stdlib.h>

int set_stack(char *str)
{
	int i;

	i = -1;
	top = EMPTY;
	stack_size = 0;
	while (str[++i] != '\0')
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%')
			stack_size++;
	if (!(stack = malloc(sizeof(int) * stack_size)))
		return (0);
	return (stack_size);
}

int push(int value)
{
	if (top == stack_size - 1)
		return (1);
	stack[++top] = value;
	return (0);
}

int pop(void)
{
	if (top < 0)
		return (INT_MIN);
	return (stack[top--]);
}