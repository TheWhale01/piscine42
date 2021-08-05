#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

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

void display(int ac, char **av)
{
	int i;

	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		ft_putstr("\n");
	}
}

int main(int ac, char **av)
{
	int i;
	int j;
	char *changer;

	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (++j < ac)
		{
			if (ft_strcmp(av[i], av[j]) < 0)
			{
				changer = av[i];
				av[i] = av[j];
				av[j] = changer;
			}
		}
	}
	display(ac, av);
	return (0);
}