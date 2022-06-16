#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push - this function adds a node to the beginning of a list
 *
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */

stack_t *head;

void pushstack(stack_t **stack, unsigned int line_number __attribute__ ((unused)))
{
    stack_t *new_node;
    new_node = (stack_t *) malloc(sizeof(stack_t));
    new_node->n = argv[1];
	new_node->prev = 0;
    new_node->next = 0;
    if (*stack == 0)
    {
        *stack = new_node;
    }
    else
    {
    *stack->prev = new_node; 
    new_node->next = *stack;
    *stack = new_node;  
	return(0);
    }
}