#include <unistd.h>
#include "file.h"
#include "basic.h"
#include "parsing.h"

int main(int ac, char **av)
{
	int i;
	int len;
	int display_header;

	if (check(ac, av) == 0)
		return (0);
	i = 2;
	display_header = 0;
	if (ac - 3 > 1)
		display_header = 1;
	while (++i < ac)
	{
		if ((len = file_len(av[i])) == -1)
			error_msg(av[i]);
		else
		{
			if (display_header == 1)
				header(av[i]);
			ft_putstr(load_file(av[i], len) + len - ft_atoi(av[2]));
			if (i != ac - 1)
				ft_putchar('\n');
		}
	}
	return (0);
}
