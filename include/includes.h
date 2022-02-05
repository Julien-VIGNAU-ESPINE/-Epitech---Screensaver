/*
** EPITECH PROJECT, 2022
** inlcudes.h
** File description:
** includes
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
framebuffer_t *framebuffer_create(unsigned int width
                                  , unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y
                  , sfColor color);
#endif    /* FRAMEBUFFER_H_ */
/*
** end of framebuffer.h
*/

#ifndef includes
#define includes

    #include <SFML/Graphics.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <math.h>
    #include <SFML/System/Vector2.h>
    #include <stddef.h>
    #include <math.h>
    #include <time.h>
    #include "../lib/my/my.h"

    sfRenderWindow *create_renderwindow(unsigned int x, unsigned int y
    , unsigned int bpp, char *title);
    void my_put_pixel(framebuffer_t *framebuffer, unsigned int x
    , unsigned int y, sfColor color);
    framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
    void framebuffer_destroy(framebuffer_t *framebuffer);
    int draw_circle(framebuffer_t *framebuffer, int x, int y
                , int rad, sfColor color);
    int make_square(framebuffer_t *framebuffer, unsigned int size
                 , unsigned int x, unsigned int y, sfColor color);
    int make_full_screen(framebuffer_t *framebuffer, sfColor color);
    int make_window(char **argv);
    int check_args(int argc, char **argv);
    int print_screensavers(void);
    int screen_loop(sfRenderWindow *wndw, sfEvent event, framebuffer_t *framebuffer
    , sfTexture *texture, sfSprite *sprite, char **argv);
    int count_time(sfClock *clock, char **argv, sfTexture *texture
    , framebuffer_t *framebuffer, float seconds);
    int choose_animation(char **argv, framebuffer_t *framebuffer
, sfTexture *texture);
int choose_animation2(char **argv, framebuffer_t *framebuffer
, sfTexture *texture);
int choose_animation3(char **argv, framebuffer_t *framebuffer
, sfTexture *texture);
int print_square(framebuffer_t *framebuffer, sfTexture *texture);
int print_circle_or_square(framebuffer_t *framebuffer, sfTexture *texture);
int change_all_color(framebuffer_t *framebuffer, sfTexture *texture);
int print_fixed_circle(framebuffer_t *framebuffer, sfTexture *texture);
int print_circle(framebuffer_t *framebuffer, sfTexture *texture);
int analyse_events(sfEvent event, sfRenderWindow *wndw);
#endif /* !includes */
