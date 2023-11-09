#include "variadic_functions.h"
/**
 * print_all - Prints anything based on the provided format
 * @format: A list of types of arguments passed to the function
 *
 * Description: This function prints values based on the provided format,
 * where 'c' is char, 'i' is integer, 'f' is float, and 's' is char *.
 * If a string is NULL, it prints (nil) instead. It ends with a new line.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char separator = '\0';

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			separator = 1;
			break;
		}

		if (format[i + 1] != '\0' && separator)
			printf(", ");

		i++;
		separator = 0;
	}

	printf("\n");
	va_end(args);
}
