#include "ft_list_size.h"

int ft_list_size(t_list *begin_list)
{
	int i;
	t_list *tmp;

	i = 0;
	tmp = begin_list;
	while (tmp != 0 && i++)
		tmp = tmp->next;
	return (i);
}