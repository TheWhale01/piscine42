int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_char_is_alphanum(char c)
{
	if ((c >= '0' && c <= '9') ||
		(c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}

char *ft_strcapitalize(char *str)
{
	int i;
	int len;

	i = -1;
	len = ft_strlen(str);
	while (++i < len - 1)
	{
		if (ft_char_is_alphanum(str[i]) == 0)
		{
			if (ft_char_is_alphanum(str[i + 1]) == 0)
			{
				if ((str[i] >= 'a' && str[i] <= 'z'))
					str[i] -= 32;
				i++;
				while (ft_char_is_alphanum(str[i]) == 0)
				{
					if (str[i] >= 'A' && str[i] <= 'Z')
						str[i] += 32;
					i++;
				}
			}
		}
	}
	return (str);
}

