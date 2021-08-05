#include "ft_list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp;

	tmp = lst;
	while (tmp != 0)
	{
		if (cmp(tmp->data, tmp->next->data) == 0)
		{
			swap = tmp->data;
			tmp->data = tmp->next->data;
			tmp->next->data = swap;
		}
		tmp = tmp->next;
	}
	return (tmp);
}