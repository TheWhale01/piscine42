#include <stdlib.h>
#include "t_list.h"

t_list *create_node(int value)
{
	t_list *tmp;

	if (!(tmp = malloc(sizeof(t_list) * 1)))
		return (0);
	tmp->value = value;
	tmp->next = 0;
	return (tmp);
}