char *ft_strcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = -1;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}