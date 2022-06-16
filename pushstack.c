#include "monty.h"

/**
 * push - this function adds a node to the beginning of a list
 *
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */

void pushstack(stack_t **stack, int line_number)
{
    stack_t *new_node;
    new_node = (stack_t *) malloc(sizeof(stack_t));
    new_node->n = line_number;
	new_node->prev = 0;
    new_node->next = 0;
    if (*stack == 0)
    {
        *stack = new_node;
    }
    else
    {
    (*stack)->prev = new_node; 
    new_node->next = *stack;
    *stack = new_node;  
    }
}