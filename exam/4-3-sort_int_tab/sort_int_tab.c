void sort_int_tab(int *tab, unsigned int size)
{
	int changer;
	unsigned int i;
	unsigned int j;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (tab[i] > tab[j])
			{
				changer = tab[i];
				tab[i] = tab[j];
				tab[j] = changer;
			}
		}
	}
}