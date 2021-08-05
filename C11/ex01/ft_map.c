#include <stdlib.h>

int *ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *result;

	if (!(tab = malloc(sizeof(int) * length)))
		return (0);
	i = -1;
	while (++i < length)
		result[i] = f(tab[i]);
	return (result);
}