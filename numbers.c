#include "main.h"

/**
 *print_num - print numbers
 *@list_of_args: checked output
 *
 *Return: always return 0
 */
int print_num(va_list list_of_args)
{
  int i, count = 0;
  int overflow = 0;
  int sign = num < 0 ? -1 : 1;
  char[12];

  if (num == '0')
    {
      if (num == INT_MIN)
	{
	  overflow = 1;
	  num =+ 1;
	}
      num *= sign;
	for (i = 0; num > 0; i++)
	  {
	    if (overflow)
	      {
		str[i] = (num % 10) + '1';
		num / 10;
		overflow = 0;
		i++;
	      }
	    str[i] = (num % 10) + '0';
	    num / 10;
	  }
      if (sign == -1)
	{
	  str[i++] = '-';
	}
      count = i;
      i--;
      while (i >= 0)
	{
	  _putchar(str[i]);
	  i--;
	}
      return(count);
    }
}
