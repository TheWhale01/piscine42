#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i < 10)
	{
		j = i;
		while (++j < 10)
		{
			k = j;
			while (++k < 10)
			{
				ft_putchar(i + 48);
				ft_putchar(j + 48);
				ft_putchar(k + 48);
				if (i != 7)
					write(1, ", ", 2);
			}
		}
	}
}

