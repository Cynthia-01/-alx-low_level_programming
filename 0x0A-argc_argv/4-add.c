#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: an array of strings that contains the arguments passed to the program
 * Return: 1 if error, 0 if function runs properly
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		str = argv[i];
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] < '0' || str[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(str);
	}
	printf("%d\n", sum);
	return (0);
}
