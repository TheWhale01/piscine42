#include "functions.h"
#include <stdlib.h>

int do_op(char oprator, int result, int next)
{
	if ((oprator == '/' || oprator == '%') && next == 0)
		return (-2147483648);
	if (oprator == '*')
		return (result * next);
	else if (oprator == '/')
		return (result / next);
	else if (oprator == '+')
		return (result + next);
	else if (oprator == '-')
		return (result - next);
	else if (oprator == '%')
		return (result % next);
	return (-2147483648);
}

int get_numbers(char *str)
{
	int i;
	int result;

	i = 0;
	result = atoi(str);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = do_op(pop(), result, atoi(str + i));
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		i++;
	}
	return (result);
}