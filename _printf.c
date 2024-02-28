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
	char = str;
/* if format argument is NULL, return -1 */
	if (format == NULL)
		return (-1);
/* calculate size of string, if <= 0, return 0 */
	size = _strlen(format);
	if (size <= 0)
		return (0);
/* initialize list named args, setting handler = to size */
	va_start(args, format);
	size = handler(format, args);
/* clean up the list */
	va_end(args);
/* check for end of argument */
	while ((str = va_arg(args, char)) != '\0')
		str++;

	return (size)
		}
