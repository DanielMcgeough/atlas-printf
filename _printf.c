#include "main.h"
#include "_printf_functions.c"

/**
 * _printf - prints whatever is fed into argument
 * @format: character strings
 * @...: whatever else we need to pass in
 * Return: returns the number of chars printed
 */


int _printf(const char *format, ...) {
    int chara_print = 0;
    va_list list_of_args;

    if (format == NULL)
        return -1;

    va_start(list_of_args, format);

    while (*format) {
        if (*format != '%') {
            write(1, format, 1);
            chara_print++;
        } else {
            format++;
            if (*format == '\0')
                break;
            else {
                // Mapping format specifiers to corresponding functions
                FormatHandler handlers[256] = { NULL };
                handlers['c'] = handle_char;
                handlers['s'] = handle_str;
                handlers['%'] = handle_percent;

                // Get the function pointer based on the format specifier
                FormatHandler handler = handlers[(unsigned char)(*format)];
                if (handler != NULL) {
                    handler(list_of_args, &chara_print);
                } else {
                    // Handle unsupported specifier or other cases
                }
            }
        }
        format++;
    }

    va_end(list_of_args);
    return chara_print;
}
