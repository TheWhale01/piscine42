int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strcpy(char *s1, char *s2)
{
	int i;
	int s2len;

	i = -1;
	s2len = ft_strlen(s2);
	while (s1[++i] != '\0')
		s2[s2len + i] = s1[i];
	s2[s2len + i] = '\0';
	return (s2);
}