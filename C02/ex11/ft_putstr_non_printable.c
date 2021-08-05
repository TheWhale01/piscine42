#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
	int i;
	char *base;

	i = -1;
	base = "0123456789abcdef";
	while (str[++i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(base[str[i] / 16]);
			ft_putchar(base[str[i] % 16]);
		}
	}
}

