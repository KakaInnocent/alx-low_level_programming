#include "main.h"

/**
 *_islower - Shows 1 if the input is a lowercase character. 
 *Other cases, it shows a 0
 * 
 *@c: The Character in ASCII code
 *
 *Return: 1 for lowercase charachter. 0 for the rest of the cases.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

