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

