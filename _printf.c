#include "main.h"

/**
 * _printf - Custom printf implementation
 * @format: Format string
 *
 * Return: Number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int char_count = 0;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format != '%')
        {
            // Normal character, write it to stdout
            write(1, format, 1);
            char_count++;
        }
        else
        {
            // Handle conversion specifiers
            format++; // Move past the '%'
            if (*format == 'c')
            {
                // Character specifier
                char c = va_arg(args, int);
                write(1, &c, 1);
                char_count++;
            }
            else if (*format == 's')
            {
                // String specifier
                char *s = va_arg(args, char *);
                if (s == NULL)
                    s = "(null)";
                while (*s)
                {
                    write(1, s, 1);
                    s++;
                    char_count++;
                }
            }
            else if (*format == '%')
            {
                // Literal '%'
                write(1, "%", 1);
                char_count++;
            }
        }
        format++;
    }

    va_end(args);
    return char_count;
}
