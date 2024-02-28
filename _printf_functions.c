#include "main.h"

/**
 * printf_ch - prints a character
 * @str: a string
 * Return: returns a char
 */
int printf_c(va_list c)
{
	int character = (int)va_arg(c, int);

	_putchar(character);
	return (1);
}

/**
 * printf_s - prints a string
 * @str: a string passed in
 * Return: returns a char
 */
int print_s(va_list s)
{
	int j;
	char *s = va_arg(s, char *);

	if (s == NULL)
		s = "(null)";
	for (j = 0; s[j]; j++)
	{
		_putchar(s[j]);
	}
	return (j);
}

/**
 * printf_% - prints a format specifier
 * @str: a string passed in
 * Return: returns a char
 */
char printf_format(char* format )
{
	return (format);
}

