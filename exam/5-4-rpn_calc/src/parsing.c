#include "functions.h"
#include <stdlib.h>

int check(char **av, int stack_size)
{
	int i;
	int nbrs;

	i = -1;
	nbrs = 0;
	if (stack_size == 0)
		return (1);
	while (av[1][++i] != '\0')
	{
		if (av[1][i] >= '0' && av[1][i] <= '9')
		{
			nbrs++;
			while ((av[1][i] >= '0' && av[1][i] <= '9') && av[1][i] != '\0')
				i++;
		}
	}
	if (nbrs != stack_size + 1)
		return (1);
	return (0);
}

int push_oprators(char *str, int len)
{
	int i;

	i = len;
	while (--i >= 0)
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%')
			if (push(str[i]) == 1)
				return (1);
	return (0);
}