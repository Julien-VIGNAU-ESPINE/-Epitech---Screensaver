/*
** EPITECH PROJECT, 2022
** make window
** File description:
** make window
*/

#include "../../include/includes.h"

sfRenderWindow *create_renderwindow(unsigned int x, unsigned int y
, unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};

    return (sfRenderWindow_create(video_mode, title
    , sfResize | sfClose, NULL));
}

int make_window(char **argv)
{
    sfRenderWindow *wndw = create_renderwindow(1920, 1080, 32
    , "Screen Saver");
    sfEvent event;
    framebuffer_t *framebuffer = NULL;
    sfTexture *texture = NULL;
    sfSprite *sprite = NULL;

    srand(time(NULL));
    framebuffer = framebuffer_create(1920, 1080);
    texture = sfTexture_create(1920, 1080);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_setFramerateLimit(wndw, 60);
    screen_loop(wndw, event, framebuffer, texture, sprite, argv);
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(wndw);
    return 0;
}