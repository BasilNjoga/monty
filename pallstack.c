#include "monty.h"

/**
 * pall - this function prints all the elements in the stack
 * 
 * Return: nothing
 */

void pallstack(stack_t **stack)
{
    stack_t *temp;
    temp = *stack;
    while (temp != NULL)
    {
        printf("%d", temp->n);
        temp = temp->next;
    }
}
