#include "main.h"

/**
 * main - Entry Point
 * Description - Print _putchar
 * Return: 0
 */
int main(void)
{
char str[] = "_putchar\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
