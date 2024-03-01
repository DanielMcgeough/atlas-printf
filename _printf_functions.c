#include "main.h"


 * printf_ch - prints a character
 * @str: a string
 * Return: returns a char

int printf_c(va_list c)
{
	int character = (int)va_arg(c, int);

	_putchar(character);
	return (1);
}
void handle_char(va_list list_of_args, int *chara_print)
{
	char c - va_arg(list_of_args, int);
	write(1, &c, 1);
	(*chara_print)++;
}


 * printf_s - prints a string
 * @str: a string passed in
 * Return: returns a char

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

void handle_str(va_list list_of_args, int *chara_print)
{
	char *str = va_arg(list_of_args, char*);
	int str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	write (1, str, str_len);
	(*chara_print) += str_len;
}


 * printf_% - prints a format specifier
 * @str: a string passed in
 * Return: returns a char
 
int printf_format(char* format )
{
	return (format);
}

void handle_percent(va_list list_of_args, int *chara_print)
{
	write (1, '%', 1);
	(*chara_print)++;
}

