#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_in(char c, char *str, int start)
{
	while (start-- >= 0)
		if (str[start] == c)
			return (1);
	return (0);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i;
	int av1len;

	if (ac == 3)
	{
		i = -1;
		av1len = ft_strlen(av[1]);
		while (av[1][++i])
			if (is_in(av[1][i], av[1], i) == 0)
				ft_putchar(av[1][i]);
		i = -1;
		while (av[2][++i])
			if (is_in(av[2][i], av[2], i) == 0 && is_in(av[2][i], av[1], av1len) == 0)
				ft_putchar(av[2][i]);
	}
	ft_putchar('\n');
	return (1);
}