#ifndef __MAIN_H__
#define __MAIN_H__

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

stack_t *head;
void push(int n)
{
    stack_t *new_node;
    new_node = (stack_t *) malloc(sizeof(stack_t));
    new_node->n = n; 
    new_node->prev = 0;
    new_node->next = 0;
    if (head == 0)
    {
        head = new_node;
    }
    else
    {
    head->prev = new_node; 
    new_node->next = head;
    head = new_node;  
    }
}

void pall()
{
    stack_t *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
}

#endif