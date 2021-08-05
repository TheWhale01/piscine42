#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int check_base(char *base)
{
	int i;
	int j;

	i = -1;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[++i] != '\0')
	{
		j = i;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[++j] != '\0')
			if (base[i] == base[j])
				return (1);
	}
	return (0);
}

void ft_putnbr_base(int nb, char *base)
{
	int len;
	unsigned int nbr;

	if (check_base(base) == 1)
		return;
	len = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr / len != 0)
		ft_putnbr_base(nbr / len, base);
	ft_putchar(base[nbr % len]);
}

