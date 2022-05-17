#include "variadic_function.h"

/**
 * sum_them_all: returns the sum of all its parameters.
 *@n: the number of arguments passed to be added.
 *
 *Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
