#include "main.h"

/**
 * _printf - prints whatever is fed into argument
 * @format: character strings
 * @...: whatever else we need to pass in
 * Return: returns the number of chars printed
 */
/**
int _printf(const char *format, ...)
{
	int size;
	va_list args;
	char str;
	int *handler;
 if format argument is NULL, return -1 
	if (format == NULL)
		return (-1);
 calculate size of string, if <= 0, return 0 
	size = strlen(format);
	if (size <= 0)
		return (0);
 initialize list named args, setting handler = to size 
	va_start(args, format);
	size = *handler(format, args);
 clean up the list 
	va_end(args);
 check for end of argument 
	str = va_arg(args, char)
	while ((str != '\0')
		str++;

	return (size);
}
*/
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
/* looping through string to find format specifiers */
	while (*format) 
	{
		if (*format == '%' && *(format + 1) != '\0'){
			if (*(format + 1) == 's') 
			{
				printf_str((va_arg(args, char*)
			}
			else if(*(format + 1) == 'c')
			{
				printf_ch((char)va_arg(args, char));
			}
			else if(*(format) == '%')
			{
				printf_spec((char)va_arg(args, char));
			}
		}else
					format ++;
	}
			va_end(args);
		}
	}
}
