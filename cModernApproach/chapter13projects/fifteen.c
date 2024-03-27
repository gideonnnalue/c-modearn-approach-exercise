#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
int evaluate_RPN_expression(const char *expression);

int main(void)
{
    char expression[100], *p = expression, c;

    while (true)
    {
        printf("Enter an RPN expression: ");

        while ((c = getchar()) != '\n' && p < expression + STACK_SIZE)
            *p++ = c;
        *p = '\0';

        printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
        make_empty();
        strcpy(expression, "");
        p = expression;
    }

    printf("\n");

    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}

int evaluate_RPN_expression(const char *expression)
{
    char a, b;

    while (*expression)
    {
        if (isdigit(*expression))
            push(*expression - '0');
        else
            switch (*expression)
            {
            case '+':
                a = pop();
                b = pop();
                push(b + a);
                break;
            case '-':
                a = pop();
                b = pop();
                push(b - a);
                break;
            case '*':
                a = pop();
                b = pop();
                push(b * a);
                break;
            case '/':
                a = pop();
                b = pop();
                push(b / a);
                break;
            case '=':
                return pop();
                break;
            case ' ':
                break;
            default:
                exit(EXIT_FAILURE);
            }
        expression++;
    }
    return 0;
}