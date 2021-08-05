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
			if (av[1][i] == 'z')
				ft_putchar('a');
			else if (av[1][i] == 'Z')
				ft_putchar('A');
			else if ((av[1][i] >= 'A' && av[1][i] <= 'Y') || (av[1][i] >= 'a' && av[1][i] <= 'y'))
				ft_putchar(av[1][i] + 1);
			else
				ft_putchar(av[1][i]);
		}
	}
	ft_putchar('\n');
	return (0);
}