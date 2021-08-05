#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	int nb;

	if (ac == 2)
	{
		i = 2;
		nb = atoi(av[1]);
		while (nb >= i * i)
		{
			if (nb % i == 0)
			{
				printf("%d*", i);
				nb /= i;
			}
			else
				i++;
		}
		printf("%d", nb);
	}
	printf("\n");
	return (0);
}