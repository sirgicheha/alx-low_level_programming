#include "main.h"
#include "stdio.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to first int
 * @n: pointer to second int
 * Return: 0
 */

void print_array(int *a, int n)
{i
	int i = o;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(",");
	}
	printf("\n");
}
