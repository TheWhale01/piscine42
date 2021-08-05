#include <unistd.h>

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
	ft_putchar(nb % 10 + '0');
}

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i < nb / i)
		i++;
	return (i);
}

int find_prev_prime(int nb, int nb_sqrt)
{
	while (nb_sqrt > 1 && nb > 2)
		if (nb % nb_sqrt-- == 0)
			return (find_prev_prime(nb - 1, ft_sqrt(nb - 1)));
	return (nb);
}

int main(int ac, char **av)
{
	int i;
	int nb;

	if (ac == 2)
	{
		i = 2;
		nb = ft_atoi(av[1]);
		if (nb > 0)
		{
			while (nb != 2)
			{
				i += find_prev_prime(nb, ft_sqrt(nb));
				nb = find_prev_prime(nb - 1, ft_sqrt(nb - 1));
			}
			ft_putnbr(i);
		}
		else
			write(1, "0", 1);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}