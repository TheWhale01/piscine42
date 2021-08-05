#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list *elem;

	elem->data = data;
	elem->next = 0;
	return (elem);
}