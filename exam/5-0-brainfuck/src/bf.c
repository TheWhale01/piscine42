#include "functions.h"
#include <stdlib.h>

//find number of cases to allocate for ptr

void execute(char *brainfuck)
{
	int i;
	char *ptr;

	i = -1;
	if (!(ptr = malloc(sizeof(char) * 65535)))
		return;
	while (brainfuck[++i] != '\0')
	{
		if (brainfuck[i] == '>')
			ptr++;
		else if (brainfuck[i] == '<')
			ptr--;
		else if (brainfuck[i] == '+')
			(*ptr)++;
		else if (brainfuck[i] == '-')
			(*ptr)--;
		else if (brainfuck[i] == '.')
			ft_putchar(*ptr);
		else
			i++;
	}
}