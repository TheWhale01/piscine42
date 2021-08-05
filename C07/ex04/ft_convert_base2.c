char *ft_convert_base(char *nbr, char *base_from, char *base_to);
int ft_atoi_base(char *str, char *base);
int get_nbr_len(int atoi_nbr, char *base_to);
int check_base(char *base);
int get_index(char c, char *base);
int ft_strlen(char *str);
void ft_putnbr_base(int nb, char *base, char *base_to_nbr, int index);

int get_nbr_len(int atoi_nbr, char *base_to)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(base_to);
	if (atoi_nbr < 0)
		atoi_nbr *= -1;
	while (atoi_nbr / len != 0)
	{
		i++;
		atoi_nbr /= len;
	}
	return (i + 1);
}

void ft_putnbr_base(int nb, char *base, char *base_to_nbr, int index)
{
	int len;
	unsigned int nbr;

	if (check_base(base) == 1)
		return;
	len = ft_strlen(base);
	if (nb < 0)
	{
		base_to_nbr[0] = '-';
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr / len != 0)
		ft_putnbr_base(nbr / len, base, base_to_nbr, index - 1);
	base_to_nbr[index] = base[nbr % len];
}

