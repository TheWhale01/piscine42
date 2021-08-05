#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr_hex(int nb)
{
	char *base;
	unsigned int nbr;

	base = "0123456789abcdef";
	if (nb < 0)
	{
		nbr = nb * -1;
		ft_putchar('-');
	}
	else
		nbr = nb;
	if (nbr / 16 != 0)
		ft_putnbr_hex(nbr / 16);
	ft_putchar(base[nbr % 16]);
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
	if (ac == 2)
		ft_putnbr_hex(ft_atoi(av[1]));
	ft_putchar('\n');
	return (0);
}