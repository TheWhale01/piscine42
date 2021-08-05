#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = i - 1;
	while (src[++j] != '\0')
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}

