#include "variadic_functions.h"

/**
 *print_all - prints anything
 *@format: a list of types of programs passed to the function.
 *
 *Return: no return. :(
 */
void print_all(const char * const format, ...)
{
	va_list verlist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const m_args[] = "cifs";

	va_start(verlist, format);
	while (format && format[i])
	{
		j = 0;
		while (m_args[j])
		{
			if (format[i] == args[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%s%c", pes, va_arg(verlist, int)), c = 1;
				break;
			case 'i':
				printf("%s%d", pes, va_arg(verlist, int)), c = 1;
				break;
			case 'f':
				printf("%s%f", pes, va_arg(verlist, double)), c = 1;
				break;
			case 's':
				str = va_arg(verlist, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(verlist);
}
