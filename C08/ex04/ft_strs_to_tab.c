#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int i;
	char *string;

	if (!(string = malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (0);
	i = -1;
	while (src[++i] != '\0')
		string[i] = src[i];
	string[i] = '\0';
	return (string);
}

/* =================== */

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

void display(t_stock_str *stock_str)
{
	int i;

	i = -1;
	while (stock_str[++i].str[0] != '\0')
	{
		ft_putstr(stock_str[i].str);
		ft_putchar('\n');
		ft_putnbr(stock_str[i].size);
		ft_putchar('\n');
		ft_putstr(stock_str[i].copy);
		ft_putchar('\n');
	}
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *stock_str;

	if (!(stock_str = malloc(sizeof(t_stock_str) * ac + 1)))
		return (0);
	i = -1;
	while (++i < ac)
	{
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_strdup(av[i]);
	}
	stock_str[i].str = "\0";
	return (stock_str);
};

int main(int ac, char **av)
{
	display(ft_strs_to_tab(ac, av));
	return (0);
}