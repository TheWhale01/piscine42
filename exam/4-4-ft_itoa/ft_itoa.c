#include <stdlib.h>

int num_digits(int nbr)
{
	int i;

	i = 1;
	while ((nbr = nbr / 10) != 0)
		i++;
	return (i);
}

char *ft_itoa(int nbr)
{
	int i;
	char *str;
	unsigned int nb;

	if (nbr < 0)
	{
		nb = nbr * -1;
		str = malloc(sizeof(char) * num_digits(nb) + 2);
		str[0] = '-';
		i = num_digits(nb) + 1;
		str[i--] = '\0';
	}
	else
	{
		nb = nbr;
		str = malloc(sizeof(char) * num_digits(nb) + 1);
		i = num_digits(nb);
	}
	while (nb != 0)
	{
		str[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}