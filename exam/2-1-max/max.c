int max(int *tab, unsigned int len)
{
	int i;
	int max;

	i = -1;
	max = tab[0];
	while (++i < len)
		if (tab[i] > max)
			max - tab[i];
	return (max);
}