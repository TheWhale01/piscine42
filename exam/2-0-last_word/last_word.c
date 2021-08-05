#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;
	char *last_word;

	if (ac == 2)
	{
		i = -1;
		while (av[1][++i] != '\0')
			if (av[1][i] <= 32 && av[1][i + 1] > 32)
				last_word = &av[1][i + 1];
		i = 0;
		while (last_word && last_word[i] > 32)
			ft_putchar(last_word[i++]);
	}
	ft_putchar('\n');
	return (0);
}