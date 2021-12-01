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

void make_window(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    framebuffer = framebuffer_create(1920, 1080);
    texture = sfTexture_create(1920, 1080);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
        {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        bubble_pop(framebuffer);
        sfTexture_updateFromPixels(texture, framebuffer->pixels, 1920, 1080, 0, 0);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
}

