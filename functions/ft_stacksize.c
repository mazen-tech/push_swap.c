#include "push_swap.h"

	/*
	Takes a pointer to the beginning of a linked list and returns
	the number of elements (nodes) in the list.
	*/
int ft_stacksize(t_push_swap *head)
{
    size_t i;
    t_push_swap *tmp;

    tmp = head;
    i = 0;

    while(tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}