#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * push - this function adds a node to the beginning of a list
 *
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
stack_t *head;
stack_t *push(int n)
{
    stack_t *new_node;
    new_node = (stack_t *) malloc(sizeof(stack_t));
    new_node->n = n; 
	new_node->prev = 0;
    new_node->next = 0;
    if (head = 0)
    {
        head = new_node;
    }
    else
    { 
    head->next = new_node;
    new_node->prev = NULL;
	return(&new_node);
    }
}