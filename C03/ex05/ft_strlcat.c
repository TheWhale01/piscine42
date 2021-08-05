#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
		i++;
	j = i - 1;
	while (src[++j] != '\0')
		dest[i++] = src[j];
	dest[i] = '\0';
	return (i + j);
}