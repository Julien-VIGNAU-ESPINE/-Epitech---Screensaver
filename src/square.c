/*
** EPITECH PROJECT, 2021
** square
** File description:
** square
*/

#include <math.h>
#include "../include/includes.h"
#include <stdio.h>

void make_square(framebuffer_t *framebuffer, unsigned int size
                 , unsigned int x, unsigned int y, sfColor color)
{
    int index2 = 0;
    int area = size * size;

    for (int index = 0; index < (area - 1); index++) {
        my_put_pixel(framebuffer, (x + index2), y, color);
        if (index2 == size){
            y += 1;
            index2 = -1;
        }
        index2 += 1;
    }
}

int time_square(framebuffer_t *framebuffer, int x, int y, int rad, int index)
{
    sfClock *clock;
    sfTime time;
    float seconds;

    clock = sfClock_create();
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.000001)
    {
        if (index % 10 == 2)
            make_square(framebuffer, 20, x + index, y, sfWhite);
        else {
            make_square(framebuffer, 20, x + index, y, sfBlue);
            make_square(framebuffer, 20, x + index + 150, y, sfRed);
        }
        sfClock_restart(clock);
    }
    return 0;
}

int square_pop(framebuffer_t *framebuffer)
{
    for (int index = 0; index < 2000000; index++)
        time_square(framebuffer, 0, 0, 10, index);
    return 0;
}

int time_square2(framebuffer_t *framebuffer, int x, int y, int index)
{
    sfClock *clock;
    sfTime time;
    float seconds;

    clock = sfClock_create();
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.00001)
    {
        if (index % 2 == 0) {
            make_square(framebuffer, 1000, x + 400, y, sfWhite);
            make_square(framebuffer, 1000, x + 1400, y, sfRed);
        }
        else {
            make_square(framebuffer, 1000, x + 400, y, sfBlue);
            make_square(framebuffer, 1000, x + 1400, y, sfWhite);
        }
        sfClock_restart(clock);
    }
    return 0;
}

int flag(framebuffer_t *framebuffer)
{
    for (int index = 0; index < 2000000; index++)
        time_square2(framebuffer, 0, 0, index);
    return 0;
}
