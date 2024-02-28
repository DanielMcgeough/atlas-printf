#include "main.h"

/**
 * _printf - prints whatever is fed into argument
 * @format: character strings
 * @...: whatever else we need to pass in
 * Return: returns the number of chars printed
 */

int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handler(format, args);

	va_end(args);

	return (size)
		}
