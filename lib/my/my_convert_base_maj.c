/*
** EPITECH PROJECT, 2021
** my_convert_base
** File description:
** convert in any base
*/

#include "my.h"

int get_temp_maj(int nb, int base)
{
    int temp = 1;

    while (nb >= temp) {
        temp *= base;
    }
    temp /= base;
    return temp;
}

int convert_maj(int nb, int base)
{
    int helpfull_var;
    int temp = get_temp_maj(nb, base);

    while (temp != 0) {
        helpfull_var = nb / temp;
        if (helpfull_var > 9)
            my_putchar((helpfull_var + 7) + '0');
        else
            my_putchar(helpfull_var + '0');
        nb -= (temp * helpfull_var);
        temp /= base;
    }
    return 0;
}
