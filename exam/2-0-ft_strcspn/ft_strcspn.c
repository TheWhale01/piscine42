int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int get_index(const char *s, char c)
{
	int i;

	i = -1;
	while (s[++i] != '\0')
		if (s[i] == c)
			return (i);
	return (ft_strlen(s));
}

size_t ft_strcspn(const char *s, const char *reject)
{
	int i;
	int len;
	int min;
	int min2;

	i = -1;
	len = ft_strlen(reject);
	if (len <= 1)
		return (get_index(s, reject[0]));
	while (++i < len - 1)
	{
		min = get_index(s, reject[i]);
		min2 = get_index(s, reject[i + 1]);
		if (min2 < min)
			min = min2;
	}
	return (min);
}