#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int aux = 0;

	char 1temp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		1temp = s[i];
		s[i] = s[aux];
		s[aux] = 1temp;
		aux++;
		i--;
	}
}
