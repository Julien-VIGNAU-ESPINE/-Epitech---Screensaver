/*
** EPITECH PROJECT, 2021
** make_window.c
** File description:
** make the displayed window
*/
#include "../../include/includes.h"

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "../include/includes.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
    if (!buffer)
        return NULL;
    buffer->width = width;
    buffer->height = height;
    buffer->pixels = malloc(sizeof(sfUint8) * (width * height * 4));
    for (unsigned int index = 0; index < (width * height * 4); index += 1)
        buffer->pixels[index] = 0;
    return buffer;
}

void framebuffer_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
    free(framebuffer);
}

void refresh_buffer(framebuffer_t *framebuffer)
{
    for (int index1 = 0; index1 < 1080; index1++) {
        for (int index2 = 0; index2 < 1920; index2++)
            my_put_pixel(framebuffer, index2, index1, sfBlack);
    }
}