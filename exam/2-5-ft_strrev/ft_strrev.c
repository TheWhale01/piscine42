int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int i;
	int len;
	char temp;

	i = -1;
	len = ft_strlen(str) - 1;
	while (++i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len--] = temp;
	}
	return (str);
}