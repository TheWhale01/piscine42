int ft_count_if(char **tab, int length, int (*f)(char *))
{
	int i;
	int num_if;

	i = -1;
	num_if = 0;
	while (++i < length)
		if (f(tab[i]) != 0)
			num_if++;
	return (num_if);
}