#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *elem;

	elem->data = data;
	elem->next = 0;
	return (elem);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	new = ft_create_elem(data);
	new->data = data;
	new->next = *begin_list;
}
