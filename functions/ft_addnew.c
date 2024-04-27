#include "push_swap.h"

	/*
	Creates a new node for a linked list with the given integer value.
	Allocates memory for the new node using malloc and sets the initial
	values for the node's value, index, and next pointer.
	-1 to represent an unset or invalid index value.
	Returns a pointer to the newly created node.
	*/
t_push_swap *ft_addnew(int value)
{
    t_push_swap *node;

    node = (t_push_swap *)malloc(sizeof(node *));
    if(!node)
        return ;

    node->value = value;
    node->index = -1;
    node->next = NULL;

    return (node);    
}