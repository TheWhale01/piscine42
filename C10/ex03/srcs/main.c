#include "file.h"
#include "basic.h"

int main(int ac, char **av)
{
	if (ft_strcmp("-C", av[1]) == 0)
		display_with_option(ac, av);
	else
		display_without_option(ac, av);
	return (0);
}