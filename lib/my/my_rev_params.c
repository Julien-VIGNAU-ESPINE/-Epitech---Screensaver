/*
** EPITECH PROJECT, 2021
** my_rev_params
** File description:
** task05
*/

#include "my.h"

void my_rev_params(int lenght, char **array)
{
    lenght--;
    while (lenght >= 0) {
        my_putstr(array[lenght]);
        my_putchar('\n');
        lenght--;
    }
}
