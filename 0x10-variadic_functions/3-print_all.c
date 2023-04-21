#include "variadic_functions.h"

/**
 *  print_char: print char
 * 
 *  param: params
 */
void print_char(va_list params)
{
    printf("%c", va_arg(params, int));
}

/**
 *  print_int: print int
 * 
 *  param: params
 */
void print_int(va_list params)
{
    printf("%d", va_arg(params, int));
}

/**
 *  print_float: print float
 * 
 *  param: params
 */
void print_float(va_list params)
{
    printf("%f", va_arg(params, double));
}

/**
 *  print_string: print string
 * 
 *  param: params
 */
void print_string(va_list params)
{
    char *str = va_arg(params, char*);

    printf("%s", (str) ? str : "(nil)");
}

/**
 *  print_all - print all params
 *
 *  @format: params format
 *  @...: params
 */
void print_all(const char * const format, ...)
{
    int i, j;
    va_list params;

    for (i = 0; format[i]; i++)
        ;
    
    token_t tokens[] = {
        {'c', print_char},
        {'d', print_int},
        {'f', print_float},
        {'s', print_string}
    };

    while (i--)
    {
        j = 3;

        while (j--)
        {
            if (tokens[j].format == format[i])
            {
                tokens[j].func(params);
                break;
            }
        }

        if (i)
            printf(", ");
    }

    printf("\n");
}