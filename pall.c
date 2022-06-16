#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pall - this function prints all the elements in the stack
 * 
 * Return: nothing
 */

void pallstack()
{
    stack_t *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->n);
        temp = temp->next;
    }
	return(0);
}
