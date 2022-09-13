#include "main.h"

/**
 * int _islower - check the code.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
	_putchar('\n');
}
