#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int *tab;

	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}

