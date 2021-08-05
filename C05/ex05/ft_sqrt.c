int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i <= nb / i)
		i++;
	if ((i - 1) * (i - 1) == nb)
		return (i - 1);
	return (0);
}

