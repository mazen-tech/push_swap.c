#include "push_swap.h"

static int reverse(t_push_swap **stack)
{
    t_push_swap *head;
    t_push_swap *tail;

    if(ft_stacksize(*stack) < 2)
        return ;

    head = *stack;
    tail = ft_findlast(*stack);

    while (head)
    {
        if(head->next->next == NULL)
        {
            head->next = NULL;
            break ;
        }
        head = head->next;
    }
    tail->next = *stack;
    *stack = tail;
    return 0;
    
}

//reverse rotation of a linked list stack (a)
int rra(t_push_swap **stack_a)
{
    if(reverse(stack_a) == (-1))
        return (-1);

    write(1, "rra\n", 4);
    return (0);
}


//reverse rotation of a linked list stack (b);
int rrb(t_push_swap **stack_b)
{
    if(reverse(stack_b) == (-1))
        return (-1);

    write(1, "rrb\n", 4);
    return (0);    
}

//reverse rotation of a linked list stack (a) and stack(b) at the same time
int rrr(t_push_swap **stack_a, t_push_swap **stack_b)
{
    if ((ft_stacksize(stack_a) < 2 || ft_stacksize(stack_b) < 2))
        return (-1);
    reverse(stack_a);
    reverse(stack_b);
    write(1, "rrr\n", 4);
    return (0);    
}