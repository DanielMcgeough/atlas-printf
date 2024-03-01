#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%");
	/*len2 = printf("%");*/
	fflush(stdout);
	printf("%d\n", len);
	return (0);
}
