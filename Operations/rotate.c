#include "push_swap.h"

//ra --> rotate the top node of the stack 'a' with the bottom node of the stack
//rb --> rotate the top node of the stack 'b' with the bottom node of th stack
//rr --> rotate the tope node of the stack 'a' and 'b' simultaneously with the bottom node
static int rotate(t_stack_node **stack)//stack (a or b)
{
    t_push_swap *head;
    t_push_swap *tail;

    if(ft_stacksize(*stack) < 2)
        return (-1);

    head = *stack;
    tail = ft_findlast(*stack);
    *stack = head->next; 
    head->next = NULL;
    tail->next = head;
    return (0);
}

/*moves the first node on stack (a) to the end*/
int ra(t_stack_node **stack_a)
{
    if(rotate(stack_a) == -1)
        return (-1);
    write(1, "ra\n", 3);
    return (0);
}

/*moves the first node of stack (b) to the end*/
int rb(t_stack_node **stack_b)
{
    if(rotate(stack_b) == -1)
        return (-1);
    write(1, "rb\n", 3);
    return (0);
}

/*moves the first node in stack (a) and stack (b) to the end at the same time*/
int rr(t_stack_node **stack_a, t_stack_node **stack_b)
{
    if((ft_stacksize(*stack_a) < 2) || (ft_stacksize(*stack_b) < 2))
        return (-1);
    rotate(stack_a);
    rotate(stack_b);
    write(1, "rr\n", 3);
    return (0);
}