#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: pointer to the beginning of the first occurrence of `needle` in
 *         `haystack`, or NULL if `needle` is not found
 */
char *_strstr(char *haystack, char *needle)
{
    for (; *haystack != '\0'; haystack++)
    {
        char *l = haystack;
        char *p = needle;

        while (*l == *p && *p != '\0')
        {
            l++;
            p++;
        }

        if (*p == '\0')
            return (haystack);
    }

    return (NULL);
}

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "Hello, World!";
    char *result;

    result = _strstr(str, "World");

    if (result != NULL)
    {
        printf("'%s' was found in '%s' at position %ld.\n", "World", str, result - str);
    }
    else
    {
        printf("'%s' was not found in '%s'.\n", "World", str);
    }

    return (0);
}
