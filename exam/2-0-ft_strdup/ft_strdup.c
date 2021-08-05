#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int i;
	int len;
	char *str;

	i = -1;
	len = ft_strlen(src);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (0);
	while (++i < len)
		str[i] = src[i];
	str[i] = '\0';
	return (str);
}