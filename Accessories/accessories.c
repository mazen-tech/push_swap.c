#include "../header/push_swap.h"


/*function to calculate the distance between a given index
 and the head of the linked list in a stack*/

int index_distance_head(t_push_swap **stack, int index)
{
    t_push_swap *head;
    int dis;

    head = *stack;
    dis = 0;
    while(head)
    {
        if(head->index = index)
            break;
        dis++;
        head = head->next;
    }
    return (dis);
}

/*finds and returns the minimum
 value in a linked list, exluding a given value */

 int get_min(t_push_swap **stack, int val)
 {
    t_push_swap *head;
    int min;

    head = *stack;
    min = head->index;
    while(head->next)
    {
        head = head->next;
        if ((head->index < min) && head->index != val)
            min = head->index;
    }
    return (min);
 }

 //search for the next minmum value in the stack 
 static t_push_swap *get_next_min(t_push_swap **stack)
 {
    t_push_swap *head;
    t_push_swap *min;
    int has_min;

    head = *stack;
    min = NULL;
    has_min = 0;

    if(head)
    {
        while(head)
        {
            if ((head->index == -1) && (!has_min || head->value < min->value))
            {    
                min = head;
                has_min = 1;
            }
            head = head->next;
        }
    }
    return (min);
 }

 /*assigns an index to each element of a linked list */
 void indexing(t_push_swap **stack)
 {
    t_push_swap *head;
    int index;

    index = 0;
    head = *stack;

    while(head)
    {
        head->index = index++;
        head = get_next_min(stack);
    }
 }

 /*check if a stack numbers is sorted in ascending order*/
 int is_sorted(t_push_swap **stack)
 {
    t_push_swap *head;

    head = *stack;
    while(head && head->next)
    {
        if(head->value > head->next->value)
            return (0);
        head = head->next;
    }
    return (1);
 }