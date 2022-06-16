#include "monty.h"

/**
 * 
 * deletenode - function that deletes node at the top of the stack
 * 
 * @
 * 
 * Return: nothing
 */

void deletenode(stack_t **stack)
{
    stack_t *temp;
    if (*stack == 0)
    {
        printf("list is empty");
    }
    else
    {
        temp = *stack;
        (*stack) = (*stack)->next;
        (*stack)->prev = 0;
        free(temp);
    }
    
}