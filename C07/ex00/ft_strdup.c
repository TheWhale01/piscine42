#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		;
	return (i);
}

char *ft_strdup(char *src)
{
	int i;
	char *string;

	if (!(string = malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (0);
	i = -1;
	while (src[++i] != '\0')
		string[i] = src[i];
	string[i] = '\0';
	return (string);
}

