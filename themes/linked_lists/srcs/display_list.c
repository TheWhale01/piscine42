#include "t_list.h"
#include <stdio.h>

void display_list(t_list *list)
{
	t_list *tmp;

	tmp = list;
	while (tmp != 0)
	{
		printf("Data = %d\n", tmp->value);
		tmp = tmp->next;
	}
}