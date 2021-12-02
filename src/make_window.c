/*
** EPITECH PROJECT, 2021
** make_window.c
** File description:
** make the displayed window
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "../include/includes.h"

/*
** framebuffer.h                                                                                                     
*/
#ifndef FRAMEBUFFER_H_
#define FRAMEBUFFER_H_
#include <SFML/Graphics.h>
struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
};
typedef struct framebuffer framebuffer_t;
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);
#endif    /* FRAMEBUFFER_H_ */
/*                                                                                                                   
** end of framebuffer.h                                                                                             
*/

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *buffer = malloc(sizeof(framebuffer_t));
    if (!buffer)
        return NULL;
    buffer->width = width;
    buffer->height = height;
    buffer->pixels = malloc(sizeof(sfUint8) * (width * height * 4));
    for (int i = 0; i < (width * height * 4); i++)
        buffer->pixels[i] = 0;
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
