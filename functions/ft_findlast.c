#include "push_swap.h"

	/*
	Iterates over the list, starting from the head and following the
	next pointers until it reaches the last node, which is the one with next
	set to NULL. Once it reaches that node, it returns a pointer to it.
	*/
t_push_swap *ft_findlast(t_push_swap *head)
{
    t_push_swap *tmp;

    tmp = head;
    while(tmp->next)
    {
        tmp = tmp->next;
        if(tmp->next == NULL)
            return (tmp);
    }
    return (tmp);
}