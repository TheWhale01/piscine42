#include <stdlib.h>

char *get_base(int base)
{
	int i;
	char start;
	char *char_base;

	if (!(char_base = malloc(sizeof(char) * base + 1)))
		return (0);
	if (base < 2 || base > 16)
		return (0);
	i = -1;
	start = '0';
	while (++i < base)
	{
		if (i == 10)
			start = 'A' - i;
		char_base[i] = i + start;
	}
	char_base[i] = '\0';
	return (char_base);
}

int ft_nblen(int value, int nb_base)
{
	int i;

	i = 1;
	if (value < 0)
		value *= -1;
	while ((value = value / nb_base))
		i++;
	return (i);
}

char *ft_itoa_base(int value, int base)
{
	int len;
	int minus;
	char *nb;
	char *char_base;

	minus = 0;
	if (value < 0)
	{
		minus = 1;
		value *= -1;
	}
	len = ft_nblen(value, base);
	if (!(nb = malloc(sizeof(char) * len + 1 + minus)))
		return (0);
	nb[0] = '-';
	nb[len + minus] = '\0';
	char_base = get_base(base);
	while (--len + minus >= 0 + minus)
	{
		nb[len + minus] = char_base[value % base];
		value /= base;
	}
	return (nb);
}

#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa_base(42, 16));
	return (0);
}