char *ft_strlowcase(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] >= 'A' && str[i] <= 'z')
			str[i] += 32;
	return (str);
}