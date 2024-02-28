#ifndef _HEADER_
#define _HEADER_

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

int _printf(const char *format, ...);

int 