int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i], tab[j]) < 0)
			{
				changer = tab[i];
				tab[i] = tab[j];
				tab[j] = changer;
			}
		}
	}
}