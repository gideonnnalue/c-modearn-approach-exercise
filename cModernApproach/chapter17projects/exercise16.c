/* Exercise 16 */
int sum(int (*f)(int), int start, int end)
{
    int result = 0;
    while (start <= end)
    {
        result += (*f)(start);
        start++;
    }
    return result;
}

/* Exercise 17 */
