#include "functions.h"
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 2)
		execute(av[1]);
	ft_putchar('\n');
	return (0);
}