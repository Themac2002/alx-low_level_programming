#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

int main(void)
{
    char s[] = "hello, world!";
    char accept[] = "abcdefghijklmnopqrstuvwxyz";
    unsigned int n;

    n = _strspn(s, accept);
    printf("%u\n", n);

    return (0);
}
