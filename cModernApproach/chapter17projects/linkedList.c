#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

void add_to_list(struct node **list, int n);
struct node *read_numbers(void);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);

int main(void)
{
    // Creates a variable that always points to the first node
    // To keep track of where the list begins
    struct node *first = NULL;

    add_to_list(&first, 10);
    add_to_list(&first, 20);
}

// Inserts a node into the beginning of a linked list
void add_to_list(struct node **list, int n)
{
    // Create a new node to be inserted in.
    struct node *new_node;
    new_node = malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    // using the -> operator replacing the indireaction operator (*ptr).value
    // to access the value inside a pointer to a struct
    new_node->value = n;
    new_node->next = list;
    *list = new_node;
}

// Creates a linked list of int inputs and stops when 0 is inputed
struct node *read_numbers(void)
{
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");
    for (;;)
    {
        scanf("%d", &n);
        if (n == 0)
            return first;
        add_to_list(&first, n);
    }
}

// Searches a linked list returning a pointer to the correct node if found or NULL if not
struct node *search_list(struct node *list, int n)
{
    struct node *p;

    // Method 1 using *p pointer variable
    for (p = list; p != NULL; p->next)
        if (p->value == n)
            return p;
    return NULL;

    // Method 2: Using list variable to keep tract of current node.
    for (; list != NULL; list = list->next)
        if (list->value == n)
            return list;
    return NULL;

    // Method 3: Combining list->value == n condition with the list != NULL
    for (; list != NULL && list->value != n; list = list->next)
        ;
    return list;

    // Method 4: Using while loop since list is NULL if we reach the end of the list.
    // returning list is correct even if we don't find n.
    while (list != NULL && list->value != n)
        list = list->next;
    return list;
}

struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur, *prev;

    for (cur = list, prev = NULL;
         cur != NULL && cur->value != n;
         prev = cur, cur = cur->next)
        ;

    if (cur == NULL)
        return list; // n was not found
    if (prev == NULL)
        list = list->next;
    else
        prev->next = cur->next;
    free(cur);
    return list;
}