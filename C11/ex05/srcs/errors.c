#include "../includes/lib.h"

int error(int ac, char **av)
{
	char *operators;

	operators = "+-*/%";
	if (ac != 4)
		return (1);
	if (av[2][0] == '/' && av[3][0] == '0')
	{
		ft_putstr("Stop : divison by zero");
		return (1);
	}
	else if (av[2][0] == '%' && av[3][0] == '0')
	{
		ft_putstr("Stop : modulo by zero");
		return (1);
	}
	if (is_in(av[2][0], operators) == 0)
	{
		ft_putstr("0");
		return (1);
	}
	return (0);
}