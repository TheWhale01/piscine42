#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int last_letter_pos(char *str)
{
	int i;
	int pos;

	i = -1;
	while (str[++i] != '\0')
		if (str[i + 1] == ' ' || str[i + 1] == '	')
			pos = i;
	return (pos);
}

int main(int ac, char **av)
{
	int i;
	int already_displayed;

	if (ac == 2)
	{
		i = 0;
		already_displayed = 0;
		while (av[1][i] == ' ' || av[1][i] == '	')
			i++;
		while (av[1][i] != '\0')
		{
			if ((av[1][i] == ' ' || av[1][i] == '	') && already_displayed == 0)
			{
				ft_putchar(' ');
				already_displayed = 1;
			}
			else if (!(av[1][i] == ' ' || av[1][i] == '	'))
			{
				ft_putchar(av[1][i]);
				if ((av[1][i + 1] == ' ' || av[1][i + 1] == '	') && i != last_letter_pos(av[1]))
					already_displayed = 0;
			}
			if (i == last_letter_pos(av[1]))
				break;
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}