#include "push_swap.h"

static void push(t_push_swap **to_stack, t_push_swap **from_stack)
{
    t_push_swap *tmp;
    t_push_swap *head_to;
    t_push_swap *head_from;

    if(ft_stacksize(*from_stack) == 0)
        return ;

    head_to = *to_stack;
    head_from = *from_stack;
    tmp = head_from;
    head_from = head_from->next;

    *from_stack = head_from;

    if(!head_to)
    {
        head_to = tmp;
        head_to->next = NULL;
        *to_stack = head_to;
    }

    else
    {
        tmp->next = head_to;
        *stack_to = tmp;
    }

}

//pa --> push the top of the stack 'b' on top node of the stack 'a'
// a is the des
// b is the src

void	pa(t_push_swap **stack_a, t_push_swap **stack_b, bool correct)
{
	push(stack_a, stack_b);
    if(!correct)
        write(1, "pa\n", 3);
}

//pb --> push the top of the stack 'a' on top node of the stack 'b' 
//b is the des
//a is the src

void	pb(t_push_swap **stack_a, t_push_swap **stack_b)
{
	push(stack_b, stack_a);
    if(!correct)
        write(1, "pb\n", 3);
}