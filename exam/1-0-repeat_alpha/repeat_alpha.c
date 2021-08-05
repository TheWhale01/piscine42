#include <unistd.h>

int get_index(char c)
{
	char start;

	if (c >= 'a' && c <= 'z')
		start = 'a';
	else
		start = 'A';
	return ((c - start) + 1);
}

int main(int ac, char **av)
{
	int i;
	int j;

	i = -1;
	if (ac >= 2)
	{
		while (av[1][++i] != '\0')
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[i][i] <= 'Z'))
			{
				j = -1;
				while (++j < get_index(av[1][i]))
					write(1, &av[1][i], 1);
			}
			else
				write(1, &av[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}