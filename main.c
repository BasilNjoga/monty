#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

int main(int argc, char *argv[])
{   
    stack_t **head;
    int newdata = atoi(argv[1]);
    pushstack(**head, newdata);
    pull();
}