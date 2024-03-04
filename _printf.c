#include "main.h"

/**
 * _printf - prints whatever is fed into argument
 * @format: character strings
 * @...: whatever else we need to pass in
 * Return: returns the number of chars printed
*/ 

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
						return (0);
					}
					else
					{
						write(1, format, 1);
						chara_print++;
					}
				}
			else if (*format == 'd' || *format == 'i')
			{
			    
			chara_print += print_num(list_of_args);
			write(1, &chara_print, 4);
			}
		}
		format++;
	}
	va_end(list_of_args);
	return chara_print;
}
/**
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

int print_num(va_list list_of_args)
{
    int num = va_arg(list_of_args, int);
    int i, count;
    int sign = num < 0 ? -1 : 1;
    char str[12];

    if (num == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        count = 1;
    }
    else
    {
        num *= sign;
        for (i = 0; num > 0; i++)
        {
            str[i] = (num % 10) + '0';
            num /= 10;
        }
        if (sign == -1)
        {
            str[i++] = '-';
        }
        str[i] = '\0';
        count = i;
    }

    for (i = count - 1; i >= 0; i--)
    {
        putchar(str[i]);
    }

    return count;
}

int _printf(const char *format, ...)
{
    int chara_print = 0;
    va_list list_of_args;

    if (format == NULL)
        return -1;
    va_start(list_of_args, format);
    while (*format)
    {
        if (*format != '%')
        {
            putchar(*format);
            chara_print++;
        }
        else
        {
            format++;
            if (*format == '\0')
            {
                return (chara_print);
            }
            else if (*format == 'c')
            {
                char c = va_arg(list_of_args, int);
                putchar(c);
                chara_print++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(list_of_args, char*);
                if (str == NULL)
                    str = "(null)";
                while (*str != '\0')
                {
                    putchar(*str);
                    chara_print++;
                    str++;
                }
            }
            else if (*format == '%')
            {
                if (*(format + 1) == '%')
                {
                    putchar('%');
                    chara_print++;
                    format++;
                }
                else
                {
                    putchar('%');
                    chara_print++;
                }
            }
            else if (*format == 'd' || *format == 'i')
            {
                chara_print += print_num(list_of_args);
            }
        }
        format++;
    }
    va_end(list_of_args);
    return chara_print;
}

int main() 
{
    _printf("%d %c %s\n", 42, 'A', "Hello, World!");
    return 0;
}
*/

