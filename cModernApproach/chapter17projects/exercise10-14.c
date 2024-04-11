#include <stdlib.h>
/* Exercise 10 */
struct node
{
    int value;
    struct node *next;
};

int count_occurrences(struct node *list, int n)
{
    int count = 0;
    while (list != NULL)
    {
        if (list->value == n)
            count++;
        list = list->next;
    }
    return count;
}

/* Exercise 12 */
struct node *find_last(struct node *list, int n)
{
    struct node *last_node = NULL;

    while (list != NULL)
    {
        if (list->value == n)
            last_node = list;
        list = list->next;
    }
    return last_node;
}

/* Exercise 13 */
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node *cur = list, *prev = NULL;
    while (cur != NULL && cur->value <= new_node->value)
    {
        prev = cur;
        cur = cur->next;
    }
    if (prev == NULL)
    {
        new_node->next = prev;
        prev = new_node;
    }
    else
    {
        prev->next = new_node;
        new_node->next = cur;
    }

    return list;
}

/* Exercise 14 */
void *delete_from_list(struct node **list, int n)
{
    struct node *item = *list;

    while (item)
    {
        if (item->value == n)
        {
            *list = item->next;
            free(item);
            break;
        }
        *list = &item->next;
        item = item->next;
    }
}