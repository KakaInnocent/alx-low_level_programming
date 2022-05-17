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
	int j = 0;
	char *str, *pes = "";

	va_start(verlist, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case "c":
					printf("%s%c", pes, va_arg(verlist, int));
					break;
				case "i":
					printf("%s%d", pes, va_arg(verlist, int));
					break;
				case "f":
					printf("%s%f", pes, va_arg(verlist, int));
					break;
				case "s":
					str = va_arg(verlist, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", pes, str);
					break;
				default:
					j++;
					continue;
			}
			pes = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(verlist);
}
