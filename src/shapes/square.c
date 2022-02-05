/*
** EPITECH PROJECT, 2022
** circle
** File description:
** all relative to square
*/

#include "../include/includes.h"

int make_square(framebuffer_t *framebuffer, unsigned int size
, unsigned int x, unsigned int y, sfColor color)
{
    for (unsigned int index = 0; index != size; index += 1) {
        for (unsigned int index2 = 0; index2 != size; index2 += 1)
            my_put_pixel(framebuffer, x + index2, y + index, color);
    }
    return 0;
}

int make_full_screen(framebuffer_t *framebuffer, sfColor color)
{
    for (int index = 0; index != 1080; index += 1) {
        for (int index2 = 0; index2 != 1920; index2 += 1)
            my_put_pixel(framebuffer, index2, index, color);
    }
    return 0;
}

int print_circle_or_square(framebuffer_t *framebuffer, sfTexture *texture)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    int radius = 50 + rand() % 70;
    sfColor colours[] = {{250, 97, 255, rand() % 255}
    , {0, 0, 255, rand() % 255}, {0, 255, 0, rand() % 255}};

    if (rand() % 2 == 1)
        draw_circle(framebuffer, x, y, radius, colours[rand() % 3]);
    else
        make_square(framebuffer, radius, x, y, colours[rand() % 3]);
    sfTexture_updateFromPixels(texture, framebuffer->pixels
        , 1920, 1080, 0, 0);
    return 0;
}

int print_square(framebuffer_t *framebuffer, sfTexture *texture)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    int radius = 50 + rand() % 100;
    sfColor colours[] = {{250, 97, 255, rand() % 255}
    , {0, 0, 255, rand() % 255}, {0, 255, 0, rand() % 255}};

    make_square(framebuffer, radius, x, y, colours[rand() % 3]);
    sfTexture_updateFromPixels(texture, framebuffer->pixels
        , 1920, 1080, 0, 0);
    return 0;
}

int change_all_color(framebuffer_t *framebuffer, sfTexture *texture)
{
    sfColor colours[] = {{250, 97, 255, rand() % 200}
    , {0, 0, 255, rand() % 200}, {0, 255, 0, rand() % 150}
    , {0, 50 + rand() % 205, 50 + rand() % 205, rand() % 200}};

    make_full_screen(framebuffer, colours[rand() % 4]);
    sfTexture_updateFromPixels(texture, framebuffer->pixels
    , 1920, 1080, 0, 0);
    return 0;
}
