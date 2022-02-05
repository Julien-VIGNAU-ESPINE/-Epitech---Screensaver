/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"

void big_s(char *word)
{
    for (int ind = 0; ind < my_strlen(word); ind++) {
        if (word[ind] < 32 || word[ind] >= 127) {
            my_putchar('\\');
            (word[ind] < 8) ? my_putstr("00") : 0;
            (word[ind] >= 8 && word[ind] < 64) ? my_putstr("0") : 0;
            convert_min(word[ind], 8);
        } else
            my_putchar(word[ind]);
    }
}

void printf1(char *var, va_list list, int index)
{
    if (var[index] == '%' && var[index + 1] == 's')
        my_putstr(va_arg(list, char *));
    if (var[index] == '%' && (var[index + 1] == 'd'
    || var[index + 1] == 'i'))
        my_put_nbr(va_arg(list, int));
    if (var[index] == '%' && var[index + 1] == '%') {
        my_putchar('%');
        my_putchar(var[index + 2]);
        index += 1;
    }
    if (var[index] == '%' && var[index + 1] == 'c')
        my_putchar(va_arg(list, int));
    if (var[index] == '%' && var[index + 1] == 'u')
        my_put_unnbr(va_arg(list, unsigned int));
}

void printf2(char *var, va_list list, int index)
{
    int temp = 0;

    if (var[index] == '%' && var[index + 1] == 'b') {
        temp = va_arg(list, int);
        (temp < 0) ? 0 : convert_min(temp, 2);
        }
    if (var[index] == '%' && var[index + 1] == 'S')
        big_s(va_arg(list, char *));
    if (var[index] != '%' && var[index - 1] != '%')
        my_putchar(var[index]);
}

int my_printf(char *var, ...)
{
    va_list list;
    int var_len = my_strlen(var);

    va_start(list, var);
    for (int index = 0; index < var_len; index++) {
        printf1(var, list, index);
        printf2(var, list, index);
        if (var[index] == '%' && var[index + 1] == 'x')
            convert_min(va_arg(list, int), 16);
        if (var[index] == '%' && var[index + 1] == 'X')
            convert_maj(va_arg(list, int), 16);
        if (var[index] == '%' && var[index + 1] == 'o')
            convert_maj(va_arg(list, int), 8);
    }
    va_end(list);
    return 0;
}
