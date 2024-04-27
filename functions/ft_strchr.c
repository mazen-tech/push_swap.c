#include "../header/push_swap.h"

	/*
	Searches for a specific character in a given string and
	returns a pointer to the first occurrence of that character in the string.
	If the character is not found, it returns a null pointer.
	*/

char *ft_strchr(const char *s, int c)
{
    while (*s != (const char)c && *s)
        s++;
    if (*s == (char)c)
        return ((char *)s);
    return (NULL);        
}