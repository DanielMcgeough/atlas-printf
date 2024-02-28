#include "main.h"

/**
 * printf_c - prints a character
 * @str: a string
 * Return: returns a char
 */
int printf_ch(va_list c)
{
	char character = (char)va_arg(c, int);

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
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}

/**
 * printf_% - prints a format specifier
 * @str: a string passed in
 * Return: returns a char
 */
char printf_spec(char* format )
{
	return (format);
}

