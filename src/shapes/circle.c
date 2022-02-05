/*
** EPITECH PROJECT, 2022
** circle
** File description:
** all relative to circle
*/

#include "../include/includes.h"

int draw_circle(framebuffer_t *framebuffer, int x, int y
                , int rad, sfColor color)
{
    for (int index = y - rad; index <= y + rad; index++) {
        for (int index2 = x - rad; index2 <= x + rad; index2++) {
            if (pow(index2 - x, 2) + pow(index - y, 2) <= pow(rad, 2))
                my_put_pixel(framebuffer, index2, index, color);
        }
    }
    return (0);
}

int print_circle(framebuffer_t *framebuffer, sfTexture *texture)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    int radius = 50 + rand() % 70;
    sfColor colours[] = {{250, 97, 255, rand() % 255}
    , {0, 0, 255, rand() % 255}, {0, 255, 0, rand() % 255}};

    draw_circle(framebuffer, x, y, radius, colours[rand() % 3]);
    sfTexture_updateFromPixels(texture, framebuffer->pixels
        , 1920, 1080, 0, 0);
    return 0;
}

int print_fixed_circle(framebuffer_t *framebuffer, sfTexture *texture)
{
    int radius = 50 + rand() % 300;

    sfColor colours[] = {{250, 97, 255, rand() % 255}
    , {0, 0, 255, rand() % 255}, {0, 255, 0, rand() % 255}
    , {0, 50 + rand() % 205, 50 + rand() % 205, rand() % 255}};

    draw_circle(framebuffer, 960, 530, radius, colours[rand() % 4]);
    sfTexture_updateFromPixels(texture, framebuffer->pixels
        , 1920, 1080, 0, 0);
    return 0;
}