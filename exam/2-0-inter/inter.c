#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_in(char c, char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] == c)
			return (1);
	return (0);
}

int check_double_letters(char c, char *str, int start)
{
	while (start-- > 0)
		if (str[start] == c)
			return (1);
	return (0);
}

int main(int ac, char **av)
{
	int i;

	if (ac == 3)
	{
		i = -1;
		while (av[1][++i] != '\0')
			if (check_double_letters(av[1][i], av[1], i) == 0 && is_in(av[1][i], av[2]) == 1)
				ft_putchar(av[1][i]);
	}
	ft_putchar('\n');
	return (0);
}
