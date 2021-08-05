#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;
	int j;

	if (ac != 1)
	{
		i = 0;
		while (++i < ac)
		{
			j = -1;
			while (av[i][++j] != '\0')
			{
				if ((av[i][j] >= 'a' && av[i][j] <= 'z') &&
					((av[i][j + 1] == ' ' || av[i][j + 1] == '	') || av[i][j + 1] == '\0'))
					ft_putchar(av[i][j] - 32);
				else if ((av[i][j] >= 'A' && av[i][j] <= 'Z') &&
						 ((av[i][j + 1] != ' ' && av[i][j + 1] != '	') || av[i][j + 1] == '\0'))
					ft_putchar(av[i][j] + 32);
				else
					ft_putchar(av[i][j]);
			}
		}
	}
	ft_putchar('\n');
	return (0);
}