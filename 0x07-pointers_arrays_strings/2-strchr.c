#include <stdio.h>
#include <string.h>

/**
 * my_memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
void *my_memcpy(void *dest, const void *src, size_t n)
{
    char *dest_ptr = (char *)dest;
    const char *src_ptr = (const char *)src;

    for (size_t i = 0; i < n; i++)
    {
        *(dest_ptr + i) = *(src_ptr + i);
    }

    return dest;
}

int main()
{
    char src[] = "Hello world!";
    char dest[sizeof(src)];

    my_memcpy(dest, src, sizeof(src));
    printf("Copied string: %s\n", dest);

    return 0;
}
