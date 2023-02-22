#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - Prints the alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
