void ft_swap(int *a, int *b)
{
	int changer;

	changer = *a;
	*a = *b;
	*b = changer;
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
			if (tab[i] < tab[j])
				ft_swap(&tab[i], &tab[j]);
	}
}

