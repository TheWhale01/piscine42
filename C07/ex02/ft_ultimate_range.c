#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (!(*range = malloc(sizeof(int) * (max - min))))
		return (-1);
	i = 0;
	while (min < max)
		range[0][i++] = min++;
	return (i);
}

