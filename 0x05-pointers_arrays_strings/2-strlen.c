#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns th elength of a string
 * @s: string to evaluate
 * Return: the lenght of the string
 */
int _strlen_(char *s)
{

int i;
i = 0;

while (s[i] != '\0')
{

i++;
}

return (i);
}
