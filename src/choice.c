/*
** EPITECH PROJECT, 2021
** choice
** File description:
** choice
*/

#include "../include/includes.h"
#include <stdio.h>
void choice(char nb)
{
    if (nb == '1')
        make_window1();
    if (nb == '2')
        make_window2();
    if (nb == '3')
        make_window3();
    if (nb == '4')
        make_window4();
}

void make_window1(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "SFML window"
                                   , sfResize | sfClose, NULL);
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
        sfTexture_updateFromPixels(texture, framebuffer->pixels
                                   , 1920, 1080, 0, 0);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
}

void make_window2(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "SFML window"
                                   , sfResize | sfClose, NULL);
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
        bubble_pop_refresh(framebuffer);
        sfTexture_updateFromPixels(texture, framebuffer->pixels
                                   , 1920, 1080, 0, 0);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
}

void make_window3(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "SFML window"
                                   , sfResize | sfClose, NULL);
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
        square_pop(framebuffer);
        sfTexture_updateFromPixels(texture, framebuffer->pixels
                                   , 1920, 1080, 0, 0);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
}

void make_window4(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;

    window = sfRenderWindow_create(mode, "SFML window"
                                   , sfResize | sfClose, NULL);
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
        flag(framebuffer);
        sfTexture_updateFromPixels(texture, framebuffer->pixels
                                   , 1920, 1080, 0, 0);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
}
