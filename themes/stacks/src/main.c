#include "stack.h"
#include "functions.h"

int main()
{
	int i;
	int item;
	t_stack stack;

	i = -1;
	stack = 0;
	while (++i < 10)
		push(&stack, i);
	while ((item = pop(&stack)) != INT_MIN)
	{
		ft_putstr("item = ");
		ft_putnbr(item);
		ft_putstr("\n");
	}
	return (0);
}