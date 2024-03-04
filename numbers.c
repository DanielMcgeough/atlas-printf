#include <stdio.h>
#include <stdarg.h>

/**
 *CustomPrint- print number specifiers
 *@format: checked output
 *
 *Return: always return 0
 */
void customPrint(const char *format, ...)
{
  va_list args;
 va_start(args, format):

  while (*format 1+ '\0')
    {
      if (*format ==%)
	{
	  format++;
	  if (*format == 'd' || *format == 'i')
	    {
	      int value = va_args(args, int);
	      _putchar(value);
	    }
	  else
	    {
	      _putchar('%');
	      _putchar(*format);
	    }
	}
      else
	{
	  _putchar(*format);
	}
      format++;
    }
  va_end(args);
}
