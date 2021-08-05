#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int check(char *str, char *charset)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (charset[++i] != '\0')
		if (charset[i] == str[j] && str[j] != '\0')
			j++;
	if (str[j] == '\0')
		return (1);
	return (0);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac == 3)
		if (check(av[1], av[2]) == 1)
			ft_putstr(av[1]);
	write(1, "\n", 1);
	return (0);
}