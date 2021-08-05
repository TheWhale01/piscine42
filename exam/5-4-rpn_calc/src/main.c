#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main(int ac, char **av)
{
	int result;

	if (ac == 2)
	{
		if (check(av, set_stack(av[1])) == 1)
		{
			printf("Error\n");
			return (0);
		}
		push_oprators(av[1], ft_strlen(av[1]));
		result = get_numbers(av[1]);
		if (result == -2147483648)
		{
			printf("Error\n");
			return (0);
		}
		else
			printf("%d\n", result);
	}
	return (0);
}