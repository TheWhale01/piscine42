#include "../includes/lib.h"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	get_file(av[1]);
	return (0);
}