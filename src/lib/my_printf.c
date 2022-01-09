/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** 
*/

#include "sokoban.h"

void my_printf(char *src, ...)
{
    va_list list;
    int i = 0;

    va_start(list, src);
    while (src[i] != '\0') {
        if (src[i] == '%') {
            if (src[i + 1] == 'c')
                my_putchar(va_arg(list, int));
            if (src[i + 1] == 'd')
                my_put_nbr(va_arg(list, int));
            if (src[i + 1] == 's')
                my_putstr(va_arg(list, char *));
        } 
        else if (src[i] != '%' && src[i - 1] != '%')
            my_putchar(src[i]);
        i += 1;
    }
    va_end(list);
}
