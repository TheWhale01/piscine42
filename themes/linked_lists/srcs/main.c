#include "t_list.h"
#include "functions.h"

int main()
{
    int i;
    t_list *tmp;
    t_list *list;

    i = -1;
    list = 0;
    while (++i < 20)
    {
        tmp = create_node(i);
        tmp->next = list;
        list = tmp;
    }
    display_list(list);
    return (0);
}