#include "main.h"
#include <stdib.h>
#include <stdio>

/**
 * malloc_checcked - Entry point
 * Description: Allocates memory using malloc
 * @b: integer
 * Return : ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
