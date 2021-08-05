#include <stdlib.h>

int nb_of_elem(int start, int end)
{
	int result;

	result = end - start;
	if (result < 0)
		return (result * -1);
	return (result);
}

int *ft_rrange(int start, int end)
{
	int i;
	int len;
	int *tab;

	len = nb_of_elem(start, end) + 1;
	if (!(tab = malloc(sizeof(int) * len)))
		return (0);
	i = -1;
	if (start < end)
		while (++i < len)
			tab[i] = start++;
	else
		while (++i < len)
			tab[i] = end++;
	return (tab);
}