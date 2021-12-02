/*
** EPITECH PROJECT, 2021
** square
** File description:
** square
*/

#include <math.h>
#include "../include/includes.h"

void make_square(framebuffer_t *framebuffer, unsigned int size, unsigned int x, unsigned int y, sfColor color)
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
            make_square(framebuffer, 20, x + index, y, sfGreen);
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
