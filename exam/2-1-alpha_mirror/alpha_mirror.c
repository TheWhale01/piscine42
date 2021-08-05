#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = -1;
		while (av[1][++i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				ft_putchar('A' - av[1][i] + 'Z');
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_putchar('a' - av[1][i] + 'z');
			else
				ft_putchar(av[1][i]);
		}
	}
	ft_putchar('\n');
	return (0);
}