/*
** EPITECH PROJECT, 2021
** my_memset
** File description:
** fill char
*/

#include "my.h"

void my_memset(char *s, int c, int n)
{
    for (int i = 0; i < n; i++) {
        s[i] = c;
    }
}
