#include "main.h"

/**
 * _printf - prints whatever is fed into argument
 * @format: character strings
 * @...: whatever else we need to pass in
 * Return: returns the number of chars printed
 */

void write_int(int num, int *chara_print) {
	if (num < 0) {
	    write_char('-', chara_print);
	num = -num;
    }

    int divisor = 1;
    while (num / divisor > 9) {
	    divisor *= 10;
    }

    while (divisor != 0) {
	    char digit = '0' + num / divisor;
	write_char(digit, chara_print);
	num %= divisor;
	divisor /= 10;
	}
}

int _printf(const char *format, ...)
{
	int chara_print = 0;
	va_list list_of_args;

	if(format == NULL)
		return -1;
	va_start(list_of_args, format);
	while(*format)
	{
		if(*format != '%')
		{
			write(1, format, 1);
			chara_print++;
		}
		else
		{
			format++;
			if(*format == '\0')
			{
				return (chara_print);
			}
			else if(*format == 'c')
			{
				char c = va_arg(list_of_args, int);
				write(1, &c, 1);
				chara_print++;
			}
			else if(*format == 's')
			{
				char *str = va_arg(list_of_args, char*);
				int str_len = 0;
				if(str == NULL)
					str = "(null)";
				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				chara_print += str_len;
			}
			else if(*format == '%')
				{
					if (*(format + 1) == '%')
					{
						write(1, "%", 1);
						chara_print++;
					}
					else
					{
						write(1, format, 1);
						chara_print++;
					}
				}
			else if (*format == 'd' || *format == 'i')
			  {
			  int num = va_arg(list_of_args, int);
			  print_int(num, &chara_print);
			  }
		}
		format++;
	}
	va_end(list_of_args);
	return chara_print;
}
