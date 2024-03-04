#ifndef MAIN_H
#define MAIN_H

/** we decided to include every lib we could think of to make sure
 * we didn't have seg faults or missing libraries and we included
 * them here in our header file to cut down on bloating in other
 * files. This way, they only need the main.h file. 
 */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
void customPrint(const char *fromat, ...);
int main(int argc, char *argv[]);

#endif
