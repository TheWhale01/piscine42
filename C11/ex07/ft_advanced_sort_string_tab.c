void ft_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;
	char *changer;

	i = -1;
	while (tab[++i] != 0)
	{
		j = -1;
		while (tab[++j] != 0)
		{
			if (cmp(tab[i], tab[j]) < 0)
			{
				changer = tab[i];
				tab[i] = tab[j];
				tab[j] = changer;
			}
		}
	}
}