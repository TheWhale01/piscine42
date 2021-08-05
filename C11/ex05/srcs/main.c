#include "../includes/lib.h"

int main(int ac, char **av)
{
	if (error(ac, av) == 1)
		return (0);
	if (av[2][0] == '+')
		ft_putnbr(do_op(ft_atoi(av[1]), ft_atoi(av[3]), &add));
	else if (av[2][0] == '-')
		ft_putnbr(do_op(ft_atoi(av[1]), ft_atoi(av[3]), &sub));
	else if (av[2][0] == '/')
		ft_putnbr(do_op(ft_atoi(av[1]), ft_atoi(av[3]), &div));
	else if (av[2][0] == '*')
		ft_putnbr(do_op(ft_atoi(av[1]), ft_atoi(av[3]), &mul));
	else if (av[2][0] == '%')
		ft_putnbr(do_op(ft_atoi(av[1]), ft_atoi(av[3]), &mod));
	write(1, "\n", 1);
	return (0);
}