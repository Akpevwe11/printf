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
            /* Normal character, write it to stdout */
            _putchar(*format);
            char_count++;
        }
        else
        {
            /* Handle conversion specifiers */
            format++; /* Move past the '%' */
            if (*format == 'c')
            {
                /* Character specifier */
                char c = va_arg(args, int);
                _putchar(c);
                char_count++;
            }
            else if (*format == 's')
            {
                /* String specifier */
                char *s = va_arg(args, char *);
                if (s == NULL)
                    s = "(null)";
                while (*s)
                {
                    _putchar(*s);
                    s++;
                    char_count++;
                }
            }
            else if (*format == '%')
            {
                /* Literal '%' */
                _putchar('%');
                char_count++;
            }
        }
        format++;
    }

    va_end(args);
    return char_count;
}
