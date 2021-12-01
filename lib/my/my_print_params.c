/*
** EPITECH PROJECT, 2021
** my_print_params
** File description:
** task04
*/

#include "my.h"

void my_print_params(int lenght, char **array)
{
    for (int i = 0; i < lenght; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
}
