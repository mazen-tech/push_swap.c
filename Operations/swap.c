#include "push_swap.h"

static int swap(t_push_swap **stack)
{
    t_push_swap *head;
    t_push_swap *next;
    int tmp_val
    int tmp_index;

    if(ft_stacksize(*stack) < 2)
        return (-1);

    head = *stack;
    next = *stack->next;

    if(!head && !next)
        return (error_message("Error!"));
    tmp_val = head->value;
    tmp_index = head->index;
    head->value = next->value;
    head->index = next->index;
    next->value = tmp->value;
    next->index = tmp->index;
    return (0);
}

//to swap the first two node in the stack a 
int sa(t_push_swap **stack_a)
{
    if(swap(stack_a == -1))
        return (-1);
    write(1, "sa\n", 3);
    return (0);   
}

//to swap the firt two nodes in the srack b
int sb(t_push_swap **stack_b)
{
    if(swap(stack_b == -1))
        return (-1);
    write(1, "sb\n", 3);
    return (0);
}

//to swap the first two nodes in stack a and b at the same time
int ss(t_push_swap **stack_a, t_push_swap **stack_b)
{
    if((ft_stacksize(*stack_a) < 2) || (ft_stacksize(*stack_b) < 2))
        return (-1);
    swap(stack_a);
    swap(stack_b);
    write(1, "ss\n", 3);
    return (0);
}
