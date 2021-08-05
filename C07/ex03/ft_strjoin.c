#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		;
	return (i);
}

void copy(int size, char **strs, char *sep, char *string)
{
	int i;
	int j;
	int k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			string[k++] = strs[i][j];
		j = -1;
		while (sep[++j] != '\0' && i != size - 1)
			string[k++] = sep[j];
	}
	string[k] = '\0';
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int total_len;
	char *string;

	i = -1;
	total_len = size - 1;
	while (++i < size)
		total_len += ft_strlen(strs[i]);
	if (!(string = malloc(sizeof(char) * total_len + 1)))
		return (0);
	copy(size, strs, sep, string);
	return (string);
}

