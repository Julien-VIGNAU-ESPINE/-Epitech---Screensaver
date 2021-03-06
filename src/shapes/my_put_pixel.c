/*
** EPITECH PROJECT, 2021
** basics.c
** File description:
** make all the basics
*/

#include "../include/includes.h"

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x
                  , unsigned int y, sfColor color)
{
    int i = (x + framebuffer->width * y) * 4;
    if (i > 1920 * 1080 * 4 - 4 || i < 0)
        return;
    framebuffer->pixels[i] = color .r;
    framebuffer->pixels[i + 1] = color .g;
    framebuffer->pixels[i + 2] = color .b;
    framebuffer->pixels[i + 3] = color .a;
}
