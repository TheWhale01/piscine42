#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr_bin(int nb)
{
	char *base;
	unsigned int nbr;

	base = "01";
	if (nb < 0)
	{
		nbr = nb * -1;
		ft_putchar('-');
	}
	else
		nbr = nb;
	if (nbr / 2 != 0)
		ft_putnbr_bin(nbr / 2);
	ft_putchar(base[nbr % 2]);
}

int num_zero(int nb)
{
	int i;

	i = 0;
	while ((nb = nb / 2) != 0)
		i++;
	return (7 - i);
}

void print_bits(unsigned char octet)
{
	int i;
	int numzeros;

	i = -1;
	numzeros = num_zero((int)octet);
	while (++i < numzeros)
		ft_putchar('0');
	ft_putnbr_bin((int)octet);
}