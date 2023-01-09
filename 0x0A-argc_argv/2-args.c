#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the eprogram
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;
	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
