/*
** EPITECH PROJECT, 2021
** task06
** File description:
** fonction my_sort_params
*/

#include "my.h"

void my_sort_params(int lenght, char **array)
{
    int index = 0;

    while (index < lenght) {
        my_putstr(array[index]);
        my_putchar('\n');
        lenght--;
    }
}
