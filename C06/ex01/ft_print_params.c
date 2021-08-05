#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		ft_putstr("\n");
	}
	return (0);
}