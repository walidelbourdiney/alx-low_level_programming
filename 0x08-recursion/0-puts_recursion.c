	#include "main.h"

	/**
	 * _puts_recursion - Entry point
	 * Description: prints a string followed by a new line using recursion
	 * @s: character
	 * Return: nothing
	 */

	void _puts_recursion(char *s)
	{
		if (*s == '\0')
		{
			_putchar('\n');
			return;
		}
		_putchar(*s);
		_puts_recursion(s + 1);
	}
