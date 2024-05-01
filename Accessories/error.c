#include "../header/push_swap.h"

void error_message(char *str)
{
    (void)str;
    write(2, "Error\n", 6);
    exit(EXIT_FAILURE);
}

//fucntion to free the meemory for a string
void free_string(char **str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    while(i >= 0)
        free(str[i--]);
    free(str);

}

//function to free the memory of a stack
void free_stack(t_push_swap **stack)
{
    t_push_swap *head;
    t_push_swap *tmp;

    head = *stack;
    while(head)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
    free(stack);
}