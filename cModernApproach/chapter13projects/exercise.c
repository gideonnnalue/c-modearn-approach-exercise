#include <stdio.h>
#include <string.h>
#include <ctype.h>

void get_extension(const char *file_name, char *extension);
void build_index_url(const char *domain, char *index_url);

int main(void)
{
    char ext[10];
    char url[100];

    // get_extension("fjdkfjd.kfk", ext);
    build_index_url("knking.com", url);
    printf("%s\n", url);
}

void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

void get_extension(const char *file_name, char *extension)
{
    int len = strlen(file_name);
    const char *name = file_name + len;

    while (*name != '.' && name != file_name)
        name--;

    if (name != file_name)
        strcpy(extension, ++name);
    else
        strcpy(extension, "");

    printf("%s\n", extension);
}

/* exercise 4 */
int read_line(char str[], int n)
{
    int ch, i = 0;

    while (isspace(getchar()))
        ;

    while (i < n && (ch = getchar()) != '\n' && !isspace(ch))
        str[i++] = ch;

    if (ch == '\n' && i < n - 1)
        str[i++] = ch;

    str[i] = '\0';
    return i;
}

/* exercise 5 */
void my_capitalize(char *a)
{
    int i = 0;
    while (a[i])
    {
        a[i++] = toupper(a[i]);
    }
}

/* exercise 5 */
void capitalize(char *a)
{
    char *str = a;
    while (*str)
    {
        *str++ = toupper(*str);
    }
}