	#include "main.h"

	/**
	 * factorial - Entry point
	 * Description: Returns a factorial of given number
	 * @n: integer
	 * Return: int
	 */

	int factorial(int n)
	{
		if (n < 0)
		{
			return (-1);
		}
		else if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
