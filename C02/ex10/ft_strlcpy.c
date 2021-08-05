int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = -1;
	while (++i < size)
		dest[i] = src[i];
	dest[i] = '\0';
	return (ft_strlen(dest));
}