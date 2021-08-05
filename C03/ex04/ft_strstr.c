#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] == to_find[j] && to_find[j] != '\0')
			j++;
	return (str + (i - j));
}

