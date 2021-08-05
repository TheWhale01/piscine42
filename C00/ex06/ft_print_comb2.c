#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void display(int i, int j)
{
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
	ft_putchar(' ');
	ft_putchar(j / 10 + 48);
	ft_putchar(j % 10 + 48);
	if (i != 98)
		write(1, ", ", 2);
}

void ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i < 100)
	{
		j = i;
		while (++j < 100)
			display(i, j);
	}
}

