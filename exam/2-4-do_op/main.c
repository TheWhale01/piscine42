#include "lib.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d\n", do_op(atoi(av[1]), atoi(av[3]), &add));
		else if (av[2][0] == '-')
			printf("%d\n", do_op(atoi(av[1]), atoi(av[3]), &sub));
		else if (av[2][0] == '/')
			printf("%d\n", do_op(atoi(av[1]), atoi(av[3]), &ft_div));
		else if (av[2][0] == '*')
			printf("%d\n", do_op(atoi(av[1]), atoi(av[3]), &mul));
		else if (av[2][0] == '%')
			printf("%d\n", do_op(atoi(av[1]), atoi(av[3]), &mod));
	}
	return (0);
}