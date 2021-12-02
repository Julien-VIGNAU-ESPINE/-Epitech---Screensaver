/*
** EPITECH PROJECT, 2021
** circle.c
** File description:
** make circle animation
*/

#include <math.h>
#include "../include/includes.h"

int draw_circle(framebuffer_t *framebuffer, int x, int y, int rad, sfColor color)
{
        for (int index = y - rad; index <= y + rad; index++) {
                for (int index2 = x - rad; index2 <= x + rad; index2++) {
                    if (pow(index2 - x, 2) + pow(index - y, 2) <= pow(rad, 2))
                        my_put_pixel(framebuffer, index2, index, color);
                }
        }
        return (0);
}

int time_circle(framebuffer_t *framebuffer, int x, int y, int rad, int index)
{
    sfClock *clock;
    sfTime time;
    float seconds;

    clock = sfClock_create();
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.000001)
    {
        if (index % 10 == 0 || index % 10 == 1)
            draw_circle(framebuffer, x + index, y, rad, sfRed);
        else if (index % 10 == 2)
            draw_circle(framebuffer, x + index, y, rad, sfGreen);
        else
            draw_circle(framebuffer, x + index, y, rad, sfBlue);
        sfClock_restart(clock);
    }
    return 0;
}

int time_circle_refresh(framebuffer_t *framebuffer, int x, int y, int rad, int index)
{
    sfClock *clock;
    sfTime time;
    float seconds;
    int nbr_bubble = 0;

    clock = sfClock_create();
    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    if (seconds > 0.000001)
    {
        if (index % 50 == 0)
            refresh_buffer(framebuffer);
        else if (index % 10 == 2 || index % 10 == 3 || index % 10 == 4)
            draw_circle(framebuffer, x + index * index, y, rad, sfGreen);
        else
            draw_circle(framebuffer, x + index * index, y, rad, sfBlue);  
        sfClock_restart(clock);
    }
    return 0;
}

int bubble_pop_refresh(framebuffer_t *framebuffer)
{
    for (int index = 0; index < 1400; index++)
        time_circle_refresh(framebuffer, 0, 0, 10, index);
    return 0;
}

int bubble_pop(framebuffer_t *framebuffer)
{
    for (int index = 0; index < 2000000; index++)
        time_circle(framebuffer, 0, 0, 10, index);
    return 0;
}
