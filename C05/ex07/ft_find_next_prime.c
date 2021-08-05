int ft_is_prime(int nb)
{
	int j;

	j = 2;
	while (j <= nb / j)
		if (nb % j++ == 0)
			return (0);
	return (1);
}

int ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (ft_is_prime(i) != 1)
		i++;
	return (i);
}

