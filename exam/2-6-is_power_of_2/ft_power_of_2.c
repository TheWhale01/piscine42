int is_power_of_2(unsigned int n)
{
	unsigned int i;

	i = 1;
	while (i >= n)
		if ((i *= 2) == n)
			return (1);
	return (0);
}