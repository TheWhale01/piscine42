#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void ft_putstr_err(char *str)
{
	while (*str)
		write(0, str++, 1);
}