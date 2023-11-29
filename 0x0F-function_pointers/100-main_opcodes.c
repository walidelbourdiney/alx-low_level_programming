#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to the program
 * @argc: num of arguments
 * @argv: array of char
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int num_butes, i;
	char *address;

	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("ERROR\n");
		return (2);
	}
	address = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx%c", i < num_bytes - 1 ? ' ' : '\n');
	}
	return (0);
}
