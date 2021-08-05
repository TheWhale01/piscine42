#include <stdlib.h>

int is_in(char c, char *charset)
{
	int i;

	i = -1;
	while (charset[++i] != '\0')
		if (charset[i] == c)
			return (1);
	return (0);
}

int count_words(char *str, char *charset)
{
	int i;
	int words;

	i = -1;
	words = 0;
	while (str[++i] != '\0')
		if (is_in(str[i], charset) == 0 && is_in(str[i + 1], charset) == 1)
			words++;
	if (is_in(str[i - 1], charset) == 0)
		return (words + 1);
	return (words);
}

int wordlen(char *str, char *charset, int start)
{
	int i;

	i = start;
	while (is_in(str[i], charset) == 0 && str[i] != '\0')
		i++;
	return (i - start);
}

char **ft_split(char *str)
{
	int i;
	int j;
	int k;
	int len;
	char **string;

	if (!(string = malloc(sizeof(char *) * count_words(str, " 	\n") + 1)))
		return (0);
	i = -1;
	k = 0;
	while (++i < count_words(str, " 	\n"))
	{
		len = wordlen(str, " 	\n", k);
		if (!(string[i] = malloc(sizeof(char) * len + 1)))
			return (0);
		j = -1;
		while (++j < len)
			string[i][j] = str[k++];
		string[i][j] = '\0';
		while (is_in(str[k], " 	\n") == 1)
			k++;
	}
	string[i] = 0;
	return (string);
}