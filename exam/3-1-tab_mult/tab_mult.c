#include <unistd.h>

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
		nbr = nb * -1;
		ft_putchar('-');
	}
	else
		nbr = nb;
	if (nbr / 10 != 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int ft_atoi(const char *str)
{
	int i;
	int nb;
	int minus;

	i = 0;
	nb = 0;
	minus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			minus = 1;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	if (minus == 1)
		return (nb * -1);
	return (nb);
}

int main(int ac, char **av)
{
	int i;
	int nbr;
	if (ac == 2)
	{
		i = 0;
		nbr = ft_atoi(av[1]);
		while (++i < 10)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(nbr);
			ft_putstr(" = ");
			ft_putnbr(nbr * i);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}