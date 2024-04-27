#include "push_swap.h"

	/*
	Helps add a new element to the end of a linked list.
	*/
void ft_addback(t_push_swap **stack, t_push_swap *new)
{
    t_push_swap *node;

    if(*stack)
    {
    node = ft_findlast(*stack);
    node->next = new;
    new->next = NULL;
    }

    else
    {
    *stack = new;
    (*stack)->next = NULL;
    }
}