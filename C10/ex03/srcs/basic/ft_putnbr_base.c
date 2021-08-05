#include "basic.h"

void ft_putnbr_base(int nb)
{
	char *base = "0123456789abcdef";
	if (nb / 16 != 0)
		ft_putnbr_base(nb / 16);
	ft_putchar(base[nb % 16]);
}

void display_nb_line(int nb)
{
	int i;
	int nbr;
	int zeros;

	i = 1;
	nbr = nb;
	while ((nbr = nbr / 16) != 0)
		i++;
	zeros = 8 - i;
	while (zeros-- > 0)
		ft_putchar('0');
	ft_putnbr_base(nb);
}