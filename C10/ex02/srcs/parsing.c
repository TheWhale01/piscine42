#include <errno.h>
#include <string.h>
#include <libgen.h>
#include "basic.h"

int check_number(char *str)
{
	while (*str)
	{
		if (!((*str) >= '0' && (*str) <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int check(int ac, char **av)
{
	if (ac < 2)
		return (0);
	if (ac == 2 && ft_strcmp("-c", av[1]) == 0)
	{
		ft_putstr_err("ft_tail: option requires an argument -- 'c'\nTry 'ft_tail --help' for more information.\n");
		return (0);
	}
	if (ac >= 2 && ft_strcmp("-c", av[1]) != 0)
	{
		ft_putstr_err("ft_tail: invalid option -- '");
		ft_putchar(av[1][1]);
		ft_putstr_err("'\nTry 'ft_tail --help' for more information.\n");
	}
	if (ac == 3 && check_number(av[2]) == 0)
	{
		ft_putstr_err("ft_tail: invalid number of bytes: ");
		ft_putstr_err("‘");
		ft_putstr_err(av[2]);
		ft_putstr_err("’\n");
		return (0);
	}
	return (1);
}

void error_msg(char *filename)
{
	ft_putstr_err("ft_tail: ");
	ft_putstr_err(filename);
	ft_putstr_err(": ");
	ft_putstr_err(strerror(errno));
	ft_putstr_err("\n");
	errno = 0;
}
