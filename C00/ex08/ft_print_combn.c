#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void display(int *tab, int n)
{
	int i;

	i = -1;
	while (++i < n - 1)
		if (tab[i] >= tab[i + 1] || (tab[i + 1] >= 10))
			return;
	i = -1;
	while (++i < n)
		ft_putchar(tab[i] + 48);
	if (tab[0] < 10 - n)
		write(1, ", ", 2);
}

void ft_print_combn(int n)
{
	int i;
	int tab[10];

	if (n <= 0 || n >= 10)
		return;
	i = -1;
	while (++i < n)
		tab[i] = i;
	while (tab[0] <= 10 - n)
	{
		display(tab, n);
		i = n;
		while (--i > 0)
		{
			if (tab[i] == 10)
			{
				tab[i] = 0;
				tab[i - 1]++;
			}
		}
		tab[n - 1]++;
	}
}

