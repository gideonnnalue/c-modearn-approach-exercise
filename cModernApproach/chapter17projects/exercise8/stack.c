#include <stdio.h>
#include <stdlib.h>  /* exit */
#include <stdbool.h> /* C99+ only */
#include "stack.h"

#define STACK_SIZE 100

struct node
{
    char value;
    struct node *next;
};

struct node *contents = NULL;

void stack_overflow(void)
{
    printf("\nExpression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("\nNot enough operands in expression\n");
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    struct node *new_node;
    while (contents != NULL)
    {
        new_node = contents;
        contents = contents->next;
        free(new_node);
    }
}

bool is_empty(void)
{
    return contents == NULL;
}

bool push(char i)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(new_node));

    if (new_node == NULL)
        return false;

    new_node->value = i;
    new_node->next = contents;
    contents = new_node;

    return true;
}

char pop(void)
{
    char value;
    struct node *new_node;

    if (is_empty())
    {
        stack_underflow();
        return -1;
    }

    value = contents->value;
    new_node = contents->next;
    free(contents);
    contents = new_node;
    return value;
}