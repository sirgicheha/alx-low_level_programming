#include <stdio.h>
#include "main.h"

/**
 * main - prints al arguments it receives
 * @argc: number of arguments
 * @argv: attau of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
