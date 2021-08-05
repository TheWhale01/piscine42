#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp != 0)
	{
		(*f)(begin_list->data);
		tmp = tmp->next;
	}
}