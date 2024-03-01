#include "main.h"

/**
 * handle_char - prints a character
 * @c: a char
 * Return: returns a void
 */

void handle_char(va_list list_of_args, int *chara_print)
{
	char c = va_arg(list_of_args, int);
	write(1, &c, 1);
	(*chara_print)++;
}

/**
 * handle_str - prints a string
 * @str: a string passed in
 * Return: returns a void
 */

void handle_str(va_list list_of_args, int *chara_print)
{
	char *str = va_arg(list_of_args, char*);
	int str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	write (1, str, str_len);
	(*chara_print) += str_len;
}

/**
 * handle_percent - prints a format specifier
 * Return: returns a void
 */

void handle_percent(va_list list_of_args, int *chara_print)
{
	char percent = "%"
	write (1, &percent, 1);
	(*chara_print)++;
}
