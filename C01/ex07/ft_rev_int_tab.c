void ft_swap(int *a, int *b)
{
	int changer;

	changer = *a;
	*a = *b;
	*b = changer;
}

void ft_rev_int_tab(int *tab, int size)
{
	int min;
	int max;

	min = -1;
	max = size;
	while (++min < --max)
		ft_swap(&tab[min], &tab[max]);
}

