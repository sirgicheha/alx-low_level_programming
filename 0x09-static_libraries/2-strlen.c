#include "main.h"

/**
 * _strlen - retursns the length of a string
 * @s: string to evaluate
 * Return: the length of string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		count++;

	return (count);
}
