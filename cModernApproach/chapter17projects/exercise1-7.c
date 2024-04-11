#include <stdlib.h>
#include <string.h>

void *my_malloc(size_t size)
{
    void *new_mem = malloc(size);
    if (new_mem == NULL)
    {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    return new_mem;
}

char *duplicate(char *str)
{
    char *new_str = (char *)malloc(strlen(str) + 1);
    if (new_str == NULL)
        return NULL;
    strcpy(new_str, str);
    return new_str;
}

int *create_array(int n, int initial_value)
{
    int *new_array = (int *)malloc(sizeof(int) * n), *p;

    if (new_array == NULL)
        return NULL;

    for (p = new_array; p < new_array + n; p++)
        *p = initial_value;

    return new_array;
}

/* Exercise 4 */
struct point
{
    int x, y;
};
struct rectangle
{
    struct point upper_left, lower_right;
};
struct rectangle *p;

void initialize_rectangle(void)
{
    p = (struct rectangle *)malloc(sizeof(p));
    if (p == NULL)
    {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    p->upper_left.x = 10;
    p->upper_left.y = 25;

    p->lower_right.x = 20;
    p->lower_right.y = 15;
}

/* Exercise 6 */
struct node
{
    int value;
    struct node *next;
};

struct node *delete_from_list(struct node **list, int n)
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

    return *list;
}

/* Exercise 7 */

// struct node *p, *next_node;

// while (p != NULL)
// {
//     next_node = p->next;
//     free(p);
//     p = next_node;
// }