#include "../includes/lib.h"

int main(int ac, char **av)
{
	int i;

	i = 0;
	errno = 0;
	if (ac < 2)
		write_empty(0);
	while (++i < ac)
	{
		if (open(av[i], O_RDONLY) == -1)
		{
			display_msg_error(av[0], av[i]);
			continue;
		}
		get_file(av[i]);
	}
}