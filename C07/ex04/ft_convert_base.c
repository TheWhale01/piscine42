#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);
int ft_atoi_base(char *str, char *base);
int get_nbr_len(int atoi_nbr, char *base_to);
int check_base(char *base);
int get_index(char c, char *base);
int ft_strlen(char *str);
void ft_putnbr_base(int nb, char *base, char *base_to_nbr, int index);

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int get_index(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i] != '\0')
		if (base[i] == c)
			return (i);
	return (-1);
}

int check_base(char *base)
{
	int i;
	int j;

	i = -1;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[++i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (1);
		j = i;
		while (base[++j] != '\0')
			if (base[i] == base[j])
				return (1);
	}
	return (0);
}

int ft_atoi_base(char *str, char *base)
{
	int i;
	int nbr;
	int nbrminus;

	if (check_base(base) == 1)
		return (0);
	i = 0;
	nbr = 0;
	nbrminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			nbrminus++;
	while (str[i] != '\0' && get_index(str[i], base) != -1)
		nbr = nbr * ft_strlen(base) + get_index(str[i++], base);
	if (nbrminus % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int minus;
	int nbr_len;
	int atoi_nbr;
	char *base_to_nbr;

	if (check_base(base_from) == 1 || check_base(base_to) == 1)
		return (0);
	atoi_nbr = ft_atoi_base(nbr, base_from);
	nbr_len = get_nbr_len(atoi_nbr, base_to);
	if (atoi_nbr < 0)
		minus = 1;
	else
		minus = 0;
	if (!(base_to_nbr = malloc(sizeof(char) * nbr_len + 1 + minus)))
		return (0);
	ft_putnbr_base(atoi_nbr, base_to, base_to_nbr, nbr_len + (minus - 1));
	base_to_nbr[nbr_len + minus] = '\0';
	return (base_to_nbr);
}

#include <stdio.h>
int main()
{
	printf("%s\n", ft_convert_base("3", "0123456789", "01"));
	return (0);
}