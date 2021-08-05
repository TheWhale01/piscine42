int ft_is_prime(int nb)
{
	int j;

	j = 2;
	while (j <= nb / j)
		if (nb % j++ == 0)
			return (0);
	return (1);
}

