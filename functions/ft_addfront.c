#include "push_swap.h"

	/*
	Helps add a new element to the beggining of a linked list.
	*/

void ft_addfront(t_push_swap **stack, t_push_swap *new)
{
	new->next = *stack;
	*stack = new;
}